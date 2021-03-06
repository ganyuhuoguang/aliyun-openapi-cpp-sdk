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

#include <alibabacloud/foas/model/GetInstanceExceptionsRequest.h>

using AlibabaCloud::Foas::Model::GetInstanceExceptionsRequest;

GetInstanceExceptionsRequest::GetInstanceExceptionsRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/projects/[projectName]/jobs/[jobName]/instances/[instanceId]/exceptions");
	setMethod(HttpRequest::Method::Get);
}

GetInstanceExceptionsRequest::~GetInstanceExceptionsRequest()
{}

std::string GetInstanceExceptionsRequest::getProjectName()const
{
	return projectName_;
}

void GetInstanceExceptionsRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setParameter("ProjectName", projectName);
}

long GetInstanceExceptionsRequest::getInstanceId()const
{
	return instanceId_;
}

void GetInstanceExceptionsRequest::setInstanceId(long instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", std::to_string(instanceId));
}

std::string GetInstanceExceptionsRequest::getRegionId()const
{
	return regionId_;
}

void GetInstanceExceptionsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

std::string GetInstanceExceptionsRequest::getJobName()const
{
	return jobName_;
}

void GetInstanceExceptionsRequest::setJobName(const std::string& jobName)
{
	jobName_ = jobName;
	setParameter("JobName", jobName);
}

