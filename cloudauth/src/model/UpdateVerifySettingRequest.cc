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

#include <alibabacloud/cloudauth/model/UpdateVerifySettingRequest.h>

using AlibabaCloud::Cloudauth::Model::UpdateVerifySettingRequest;

UpdateVerifySettingRequest::UpdateVerifySettingRequest() :
	RpcServiceRequest("cloudauth", "2019-03-07", "UpdateVerifySetting")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateVerifySettingRequest::~UpdateVerifySettingRequest()
{}

bool UpdateVerifySettingRequest::getGuideStep()const
{
	return guideStep_;
}

void UpdateVerifySettingRequest::setGuideStep(bool guideStep)
{
	guideStep_ = guideStep;
	setParameter("GuideStep", guideStep ? "true" : "false");
}

bool UpdateVerifySettingRequest::getResultStep()const
{
	return resultStep_;
}

void UpdateVerifySettingRequest::setResultStep(bool resultStep)
{
	resultStep_ = resultStep;
	setParameter("ResultStep", resultStep ? "true" : "false");
}

std::string UpdateVerifySettingRequest::getSourceIp()const
{
	return sourceIp_;
}

void UpdateVerifySettingRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string UpdateVerifySettingRequest::getSolution()const
{
	return solution_;
}

void UpdateVerifySettingRequest::setSolution(const std::string& solution)
{
	solution_ = solution;
	setParameter("Solution", solution);
}

std::string UpdateVerifySettingRequest::getBizName()const
{
	return bizName_;
}

void UpdateVerifySettingRequest::setBizName(const std::string& bizName)
{
	bizName_ = bizName;
	setParameter("BizName", bizName);
}

std::string UpdateVerifySettingRequest::getBizType()const
{
	return bizType_;
}

void UpdateVerifySettingRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

bool UpdateVerifySettingRequest::getPrivacyStep()const
{
	return privacyStep_;
}

void UpdateVerifySettingRequest::setPrivacyStep(bool privacyStep)
{
	privacyStep_ = privacyStep;
	setParameter("PrivacyStep", privacyStep ? "true" : "false");
}

