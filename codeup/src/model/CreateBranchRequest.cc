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

#include <alibabacloud/codeup/model/CreateBranchRequest.h>

using AlibabaCloud::Codeup::Model::CreateBranchRequest;

CreateBranchRequest::CreateBranchRequest() :
	RoaServiceRequest("codeup", "2020-04-14")
{
	setResourcePath("/api/v3/projects/[ProjectId]/repository/branches");
	setMethod(HttpRequest::Method::Post);
}

CreateBranchRequest::~CreateBranchRequest()
{}

std::string CreateBranchRequest::getOrganizationId()const
{
	return organizationId_;
}

void CreateBranchRequest::setOrganizationId(const std::string& organizationId)
{
	organizationId_ = organizationId;
	setParameter("OrganizationId", organizationId);
}

std::string CreateBranchRequest::getSubUserId()const
{
	return subUserId_;
}

void CreateBranchRequest::setSubUserId(const std::string& subUserId)
{
	subUserId_ = subUserId;
	setParameter("SubUserId", subUserId);
}

std::string CreateBranchRequest::getAccessToken()const
{
	return accessToken_;
}

void CreateBranchRequest::setAccessToken(const std::string& accessToken)
{
	accessToken_ = accessToken;
	setParameter("AccessToken", accessToken);
}

long CreateBranchRequest::getProjectId()const
{
	return projectId_;
}

void CreateBranchRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

