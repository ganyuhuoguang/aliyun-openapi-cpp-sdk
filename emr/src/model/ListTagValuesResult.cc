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

#include <alibabacloud/emr/model/ListTagValuesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListTagValuesResult::ListTagValuesResult() :
	ServiceResult()
{}

ListTagValuesResult::ListTagValuesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTagValuesResult::~ListTagValuesResult()
{}

void ListTagValuesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allValues = value["Values"]["Value"];
	for (const auto &item : allValues)
		values_.push_back(item.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListTagValuesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListTagValuesResult::getMessage()const
{
	return message_;
}

std::string ListTagValuesResult::getNextToken()const
{
	return nextToken_;
}

int ListTagValuesResult::getPageSize()const
{
	return pageSize_;
}

std::vector<std::string> ListTagValuesResult::getValues()const
{
	return values_;
}

std::string ListTagValuesResult::getCode()const
{
	return code_;
}

bool ListTagValuesResult::getSuccess()const
{
	return success_;
}

