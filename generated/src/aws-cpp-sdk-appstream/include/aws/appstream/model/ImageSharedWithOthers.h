﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{
  enum class ImageSharedWithOthers
  {
    NOT_SET,
    TRUE,
    FALSE
  };

namespace ImageSharedWithOthersMapper
{
AWS_APPSTREAM_API ImageSharedWithOthers GetImageSharedWithOthersForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForImageSharedWithOthers(ImageSharedWithOthers value);
} // namespace ImageSharedWithOthersMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
