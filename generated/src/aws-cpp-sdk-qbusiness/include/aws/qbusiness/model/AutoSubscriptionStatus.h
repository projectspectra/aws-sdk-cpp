﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{
  enum class AutoSubscriptionStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace AutoSubscriptionStatusMapper
{
AWS_QBUSINESS_API AutoSubscriptionStatus GetAutoSubscriptionStatusForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForAutoSubscriptionStatus(AutoSubscriptionStatus value);
} // namespace AutoSubscriptionStatusMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
