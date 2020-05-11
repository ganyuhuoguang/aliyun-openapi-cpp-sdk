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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDETACHEDBACKUPSRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDETACHEDBACKUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeDetachedBackupsResult : public ServiceResult
			{
			public:
				struct Backup
				{
					std::string backupMethod;
					std::string backupMode;
					std::string backupsLevel;
					std::string dBClusterId;
					std::string backupId;
					std::string isAvail;
					std::string backupSetSize;
					std::string storeStatus;
					std::string backupEndTime;
					std::string backupStartTime;
					std::string consistentTime;
					std::string backupType;
					std::string backupStatus;
				};


				DescribeDetachedBackupsResult();
				explicit DescribeDetachedBackupsResult(const std::string &payload);
				~DescribeDetachedBackupsResult();
				std::string getTotalRecordCount()const;
				std::string getPageRecordCount()const;
				std::string getPageNumber()const;
				std::vector<Backup> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalRecordCount_;
				std::string pageRecordCount_;
				std::string pageNumber_;
				std::vector<Backup> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDETACHEDBACKUPSRESULT_H_