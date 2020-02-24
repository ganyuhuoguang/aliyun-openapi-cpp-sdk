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

#include <alibabacloud/ft/model/FtEagleEyeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ft;
using namespace AlibabaCloud::Ft::Model;

FtEagleEyeResult::FtEagleEyeResult() :
	ServiceResult()
{}

FtEagleEyeResult::FtEagleEyeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FtEagleEyeResult::~FtEagleEyeResult()
{}

void FtEagleEyeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["eagleEyeTraceId"].isNull())
		eagleEyeTraceId_ = value["eagleEyeTraceId"].asString();

}

std::string FtEagleEyeResult::getEagleEyeTraceId()const
{
	return eagleEyeTraceId_;
}

std::string FtEagleEyeResult::getName()const
{
	return name_;
}

