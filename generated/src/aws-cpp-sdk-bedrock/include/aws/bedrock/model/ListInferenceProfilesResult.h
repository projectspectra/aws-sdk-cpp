﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/InferenceProfileSummary.h>
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
namespace Bedrock
{
namespace Model
{
  class ListInferenceProfilesResult
  {
  public:
    AWS_BEDROCK_API ListInferenceProfilesResult();
    AWS_BEDROCK_API ListInferenceProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListInferenceProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of information about each inference profile that you can use.</p>
     */
    inline const Aws::Vector<InferenceProfileSummary>& GetInferenceProfileSummaries() const{ return m_inferenceProfileSummaries; }
    inline void SetInferenceProfileSummaries(const Aws::Vector<InferenceProfileSummary>& value) { m_inferenceProfileSummaries = value; }
    inline void SetInferenceProfileSummaries(Aws::Vector<InferenceProfileSummary>&& value) { m_inferenceProfileSummaries = std::move(value); }
    inline ListInferenceProfilesResult& WithInferenceProfileSummaries(const Aws::Vector<InferenceProfileSummary>& value) { SetInferenceProfileSummaries(value); return *this;}
    inline ListInferenceProfilesResult& WithInferenceProfileSummaries(Aws::Vector<InferenceProfileSummary>&& value) { SetInferenceProfileSummaries(std::move(value)); return *this;}
    inline ListInferenceProfilesResult& AddInferenceProfileSummaries(const InferenceProfileSummary& value) { m_inferenceProfileSummaries.push_back(value); return *this; }
    inline ListInferenceProfilesResult& AddInferenceProfileSummaries(InferenceProfileSummary&& value) { m_inferenceProfileSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, use this token when making another request in the
     * <code>nextToken</code> field to return the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListInferenceProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListInferenceProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListInferenceProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListInferenceProfilesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListInferenceProfilesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListInferenceProfilesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<InferenceProfileSummary> m_inferenceProfileSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
