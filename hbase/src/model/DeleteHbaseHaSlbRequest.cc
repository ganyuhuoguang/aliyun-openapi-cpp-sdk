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

#include <alibabacloud/hbase/model/DeleteHbaseHaSlbRequest.h>

using AlibabaCloud::HBase::Model::DeleteHbaseHaSlbRequest;

DeleteHbaseHaSlbRequest::DeleteHbaseHaSlbRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "DeleteHbaseHaSlb")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteHbaseHaSlbRequest::~DeleteHbaseHaSlbRequest()
{}

std::string DeleteHbaseHaSlbRequest::getHaId()const
{
	return haId_;
}

void DeleteHbaseHaSlbRequest::setHaId(const std::string& haId)
{
	haId_ = haId;
	setCoreParameter("HaId", haId);
}

std::string DeleteHbaseHaSlbRequest::getHaTypes()const
{
	return haTypes_;
}

void DeleteHbaseHaSlbRequest::setHaTypes(const std::string& haTypes)
{
	haTypes_ = haTypes;
	setCoreParameter("HaTypes", haTypes);
}

std::string DeleteHbaseHaSlbRequest::getBdsId()const
{
	return bdsId_;
}

void DeleteHbaseHaSlbRequest::setBdsId(const std::string& bdsId)
{
	bdsId_ = bdsId;
	setCoreParameter("BdsId", bdsId);
}

