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

#ifndef ALIBABACLOUD_HBASE_MODEL_MODIFYIPWHITELISTREQUEST_H_
#define ALIBABACLOUD_HBASE_MODEL_MODIFYIPWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/hbase/HBaseExport.h>

namespace AlibabaCloud
{
	namespace HBase
	{
		namespace Model
		{
			class ALIBABACLOUD_HBASE_EXPORT ModifyIpWhitelistRequest : public RpcServiceRequest
			{

			public:
				ModifyIpWhitelistRequest();
				~ModifyIpWhitelistRequest();

				std::string getIpList()const;
				void setIpList(const std::string& ipList);
				std::string getIpVersion()const;
				void setIpVersion(const std::string& ipVersion);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getGroupName()const;
				void setGroupName(const std::string& groupName);

            private:
				std::string ipList_;
				std::string ipVersion_;
				std::string clusterId_;
				std::string groupName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_MODIFYIPWHITELISTREQUEST_H_