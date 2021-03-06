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

#ifndef ALIBABACLOUD_CLOUDWF_MODEL_REPORTZONEHOURREQUEST_H_
#define ALIBABACLOUD_CLOUDWF_MODEL_REPORTZONEHOURREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudwf/CloudwfExport.h>

namespace AlibabaCloud
{
	namespace Cloudwf
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDWF_EXPORT ReportZoneHourRequest : public RpcServiceRequest
			{

			public:
				ReportZoneHourRequest();
				~ReportZoneHourRequest();

				std::string getBeginDate()const;
				void setBeginDate(const std::string& beginDate);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				long getAgsid()const;
				void setAgsid(long agsid);
				std::string getEndDate()const;
				void setEndDate(const std::string& endDate);

            private:
				std::string beginDate_;
				std::string accessKeyId_;
				long agsid_;
				std::string endDate_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDWF_MODEL_REPORTZONEHOURREQUEST_H_