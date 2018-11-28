﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{
  class AWS_SECURITYHUB_API CreateInsightResult
  {
  public:
    CreateInsightResult();
    CreateInsightResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateInsightResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN Of the created insight.</p>
     */
    inline const Aws::String& GetInsightArn() const{ return m_insightArn; }

    /**
     * <p>The ARN Of the created insight.</p>
     */
    inline void SetInsightArn(const Aws::String& value) { m_insightArn = value; }

    /**
     * <p>The ARN Of the created insight.</p>
     */
    inline void SetInsightArn(Aws::String&& value) { m_insightArn = std::move(value); }

    /**
     * <p>The ARN Of the created insight.</p>
     */
    inline void SetInsightArn(const char* value) { m_insightArn.assign(value); }

    /**
     * <p>The ARN Of the created insight.</p>
     */
    inline CreateInsightResult& WithInsightArn(const Aws::String& value) { SetInsightArn(value); return *this;}

    /**
     * <p>The ARN Of the created insight.</p>
     */
    inline CreateInsightResult& WithInsightArn(Aws::String&& value) { SetInsightArn(std::move(value)); return *this;}

    /**
     * <p>The ARN Of the created insight.</p>
     */
    inline CreateInsightResult& WithInsightArn(const char* value) { SetInsightArn(value); return *this;}

  private:

    Aws::String m_insightArn;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
