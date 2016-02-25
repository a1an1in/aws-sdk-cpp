/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Information about a repository name and ID.</p>
   */
  class AWS_CODECOMMIT_API RepositoryNameIdPair
  {
  public:
    RepositoryNameIdPair();
    RepositoryNameIdPair(const Aws::Utils::Json::JsonValue& jsonValue);
    RepositoryNameIdPair& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    
    inline RepositoryNameIdPair& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    
    inline RepositoryNameIdPair& WithRepositoryName(Aws::String&& value) { SetRepositoryName(value); return *this;}

    
    inline RepositoryNameIdPair& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The ID associated with the repository name.</p>
     */
    inline const Aws::String& GetRepositoryId() const{ return m_repositoryId; }

    /**
     * <p>The ID associated with the repository name.</p>
     */
    inline void SetRepositoryId(const Aws::String& value) { m_repositoryIdHasBeenSet = true; m_repositoryId = value; }

    /**
     * <p>The ID associated with the repository name.</p>
     */
    inline void SetRepositoryId(Aws::String&& value) { m_repositoryIdHasBeenSet = true; m_repositoryId = value; }

    /**
     * <p>The ID associated with the repository name.</p>
     */
    inline void SetRepositoryId(const char* value) { m_repositoryIdHasBeenSet = true; m_repositoryId.assign(value); }

    /**
     * <p>The ID associated with the repository name.</p>
     */
    inline RepositoryNameIdPair& WithRepositoryId(const Aws::String& value) { SetRepositoryId(value); return *this;}

    /**
     * <p>The ID associated with the repository name.</p>
     */
    inline RepositoryNameIdPair& WithRepositoryId(Aws::String&& value) { SetRepositoryId(value); return *this;}

    /**
     * <p>The ID associated with the repository name.</p>
     */
    inline RepositoryNameIdPair& WithRepositoryId(const char* value) { SetRepositoryId(value); return *this;}

  private:
    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;
    Aws::String m_repositoryId;
    bool m_repositoryIdHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws