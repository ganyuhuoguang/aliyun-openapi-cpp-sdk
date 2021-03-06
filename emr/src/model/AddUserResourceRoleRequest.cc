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

#include <alibabacloud/emr/model/AddUserResourceRoleRequest.h>

using AlibabaCloud::Emr::Model::AddUserResourceRoleRequest;

AddUserResourceRoleRequest::AddUserResourceRoleRequest() :
	RpcServiceRequest("emr", "2016-04-08", "AddUserResourceRole")
{}

AddUserResourceRoleRequest::~AddUserResourceRoleRequest()
{}

long AddUserResourceRoleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddUserResourceRoleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddUserResourceRoleRequest::getResourceId()const
{
	return resourceId_;
}

void AddUserResourceRoleRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", resourceId);
}

long AddUserResourceRoleRequest::getRoleId()const
{
	return roleId_;
}

void AddUserResourceRoleRequest::setRoleId(long roleId)
{
	roleId_ = roleId;
	setCoreParameter("RoleId", std::to_string(roleId));
}

std::string AddUserResourceRoleRequest::getResourceType()const
{
	return resourceType_;
}

void AddUserResourceRoleRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

std::string AddUserResourceRoleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddUserResourceRoleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string AddUserResourceRoleRequest::getRegionId()const
{
	return regionId_;
}

void AddUserResourceRoleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string AddUserResourceRoleRequest::getAliyunUserId()const
{
	return aliyunUserId_;
}

void AddUserResourceRoleRequest::setAliyunUserId(const std::string& aliyunUserId)
{
	aliyunUserId_ = aliyunUserId;
	setCoreParameter("AliyunUserId", aliyunUserId);
}

