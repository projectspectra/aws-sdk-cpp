﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-data/model/BatchExecuteStatementResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RedshiftDataAPIService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchExecuteStatementResult::BatchExecuteStatementResult()
{
}

BatchExecuteStatementResult::BatchExecuteStatementResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchExecuteStatementResult& BatchExecuteStatementResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ClusterIdentifier"))
  {
    m_clusterIdentifier = jsonValue.GetString("ClusterIdentifier");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");

  }

  if(jsonValue.ValueExists("DbGroups"))
  {
    Aws::Utils::Array<JsonView> dbGroupsJsonList = jsonValue.GetArray("DbGroups");
    for(unsigned dbGroupsIndex = 0; dbGroupsIndex < dbGroupsJsonList.GetLength(); ++dbGroupsIndex)
    {
      m_dbGroups.push_back(dbGroupsJsonList[dbGroupsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("DbUser"))
  {
    m_dbUser = jsonValue.GetString("DbUser");

  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

  }

  if(jsonValue.ValueExists("SessionId"))
  {
    m_sessionId = jsonValue.GetString("SessionId");

  }

  if(jsonValue.ValueExists("WorkgroupName"))
  {
    m_workgroupName = jsonValue.GetString("WorkgroupName");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
