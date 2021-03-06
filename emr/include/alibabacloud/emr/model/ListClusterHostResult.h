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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTCLUSTERHOSTRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTCLUSTERHOSTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListClusterHostResult : public ServiceResult
			{
			public:
				struct Host
				{
					struct Disk
					{
						std::string diskType;
						std::string type;
						std::string device;
						int diskSize;
						std::string diskId;
					};
					std::string status;
					std::string zoneId;
					std::string publicIp;
					int memory;
					std::string createTime;
					int cpu;
					std::string hostInstanceId;
					std::string role;
					std::string type;
					std::string serialNumber;
					std::string hostGroupId;
					std::string privateIp;
					std::string instanceStatus;
					std::string chargeType;
					long expiredTime;
					std::vector<Host::Disk> diskList;
					std::string emrExpiredTime;
					bool supportIpV6;
					std::string instanceType;
					std::string hostName;
				};


				ListClusterHostResult();
				explicit ListClusterHostResult(const std::string &payload);
				~ListClusterHostResult();
				int getPageSize()const;
				int getPageNumber()const;
				int getTotal()const;
				std::vector<Host> getHostList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int pageNumber_;
				int total_;
				std::vector<Host> hostList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTCLUSTERHOSTRESULT_H_