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

#ifndef ALIBABACLOUD_VS_MODEL_DESCRIBEVSDOMAINREQBPSDATAREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_DESCRIBEVSDOMAINREQBPSDATAREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT DescribeVsDomainReqBpsDataRequest : public RpcServiceRequest
			{

			public:
				DescribeVsDomainReqBpsDataRequest();
				~DescribeVsDomainReqBpsDataRequest();

				std::string getLocationNameEn()const;
				void setLocationNameEn(const std::string& locationNameEn);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getIspNameEn()const;
				void setIspNameEn(const std::string& ispNameEn);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getInterval()const;
				void setInterval(const std::string& interval);

            private:
				std::string locationNameEn_;
				std::string startTime_;
				std::string ispNameEn_;
				std::string showLog_;
				std::string domainName_;
				std::string endTime_;
				long ownerId_;
				std::string interval_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_DESCRIBEVSDOMAINREQBPSDATAREQUEST_H_