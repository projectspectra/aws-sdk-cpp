﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/DescribeFlowSourceThumbnailRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeFlowSourceThumbnailRequest::DescribeFlowSourceThumbnailRequest() : 
    m_flowArnHasBeenSet(false)
{
}

Aws::String DescribeFlowSourceThumbnailRequest::SerializePayload() const
{
  return {};
}




