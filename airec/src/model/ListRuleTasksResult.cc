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

#include <alibabacloud/airec/model/ListRuleTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ListRuleTasksResult::ListRuleTasksResult() :
	ServiceResult()
{}

ListRuleTasksResult::ListRuleTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRuleTasksResult::~ListRuleTasksResult()
{}

void ListRuleTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["FinishRate"].isNull())
		result_.finishRate = std::stoi(resultNode["FinishRate"].asString());
	if(!resultNode["FinishTime"].isNull())
		result_.finishTime = std::stoi(resultNode["FinishTime"].asString());

}

ListRuleTasksResult::Result ListRuleTasksResult::getResult()const
{
	return result_;
}

