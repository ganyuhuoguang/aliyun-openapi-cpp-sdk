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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYPRODUCTLISTREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYPRODUCTLISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/bssopenapi/BssOpenApiExport.h>

namespace AlibabaCloud
{
	namespace BssOpenApi
	{
		namespace Model
		{
			class ALIBABACLOUD_BSSOPENAPI_EXPORT QueryProductListRequest : public RpcServiceRequest
			{

			public:
				QueryProductListRequest();
				~QueryProductListRequest();

				int getPageNum()const;
				void setPageNum(int pageNum);
				bool getQueryTotalCount()const;
				void setQueryTotalCount(bool queryTotalCount);
				int getPageSize()const;
				void setPageSize(int pageSize);

            private:
				int pageNum_;
				bool queryTotalCount_;
				int pageSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYPRODUCTLISTREQUEST_H_