/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_CCC_MODEL_ADDAGENTDEVICEREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_ADDAGENTDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT AddAgentDeviceRequest : public RpcServiceRequest
			{

			public:
				AddAgentDeviceRequest();
				~AddAgentDeviceRequest();

				std::string getRemark()const;
				void setRemark(const std::string& remark);
				std::string getClientPort()const;
				void setClientPort(const std::string& clientPort);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getClientIp()const;
				void setClientIp(const std::string& clientIp);
				std::string getBrowserVersion()const;
				void setBrowserVersion(const std::string& browserVersion);

            private:
				std::string remark_;
				std::string clientPort_;
				std::string accessKeyId_;
				std::string instanceId_;
				std::string clientIp_;
				std::string browserVersion_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_ADDAGENTDEVICEREQUEST_H_