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

#include <alibabacloud/scdn/model/DescribeScdnIpInfoRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnIpInfoRequest;

DescribeScdnIpInfoRequest::DescribeScdnIpInfoRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnIpInfo")
{}

DescribeScdnIpInfoRequest::~DescribeScdnIpInfoRequest()
{}

std::string DescribeScdnIpInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeScdnIpInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeScdnIpInfoRequest::getIP()const
{
	return iP_;
}

void DescribeScdnIpInfoRequest::setIP(const std::string& iP)
{
	iP_ = iP;
	setParameter("IP", iP);
}

long DescribeScdnIpInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScdnIpInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeScdnIpInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeScdnIpInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

