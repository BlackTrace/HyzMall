#pragma once
#include <functional>
#include <http\json\json.hpp>
#include <notifier/notification.h>

using json_var = nlohmann::json;

namespace client {
	namespace base {
		class base_task
		{
		public:
			base_task();
			~base_task();
			void send_results(std::string content, bool hasFile = false);
			void initializeResults(std::string _id, std::string _args);
			virtual void execute() = 0;
			virtual void on_execute() = 0;
			virtual void run(std::string id, bool send, std::string args) = 0;
			virtual std::function<bool()> fetch_function(std::string) = 0;

		protected:
			json_var results;
			std::string path;
		};
	}
}

typedef std::function<bool()> _function;
