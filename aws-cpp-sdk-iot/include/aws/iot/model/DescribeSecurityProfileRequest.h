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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API DescribeSecurityProfileRequest : public IoTRequest
  {
  public:
    DescribeSecurityProfileRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSecurityProfile"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the security profile whose information you want to get.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const{ return m_securityProfileName; }

    /**
     * <p>The name of the security profile whose information you want to get.</p>
     */
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }

    /**
     * <p>The name of the security profile whose information you want to get.</p>
     */
    inline void SetSecurityProfileName(const Aws::String& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = value; }

    /**
     * <p>The name of the security profile whose information you want to get.</p>
     */
    inline void SetSecurityProfileName(Aws::String&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::move(value); }

    /**
     * <p>The name of the security profile whose information you want to get.</p>
     */
    inline void SetSecurityProfileName(const char* value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName.assign(value); }

    /**
     * <p>The name of the security profile whose information you want to get.</p>
     */
    inline DescribeSecurityProfileRequest& WithSecurityProfileName(const Aws::String& value) { SetSecurityProfileName(value); return *this;}

    /**
     * <p>The name of the security profile whose information you want to get.</p>
     */
    inline DescribeSecurityProfileRequest& WithSecurityProfileName(Aws::String&& value) { SetSecurityProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the security profile whose information you want to get.</p>
     */
    inline DescribeSecurityProfileRequest& WithSecurityProfileName(const char* value) { SetSecurityProfileName(value); return *this;}

  private:

    Aws::String m_securityProfileName;
    bool m_securityProfileNameHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
