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
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/IoTThingsGraphRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

  /**
   */
  class AWS_IOTTHINGSGRAPH_API DeleteSystemTemplateRequest : public IoTThingsGraphRequest
  {
  public:
    DeleteSystemTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSystemTemplate"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the system to be deleted.</p> <p>The ID should be in the following
     * format.</p> <p> <code>urn:tdm:REGION/ACCOUNT ID/default:system:SYSTEMNAME</code>
     * </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the system to be deleted.</p> <p>The ID should be in the following
     * format.</p> <p> <code>urn:tdm:REGION/ACCOUNT ID/default:system:SYSTEMNAME</code>
     * </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the system to be deleted.</p> <p>The ID should be in the following
     * format.</p> <p> <code>urn:tdm:REGION/ACCOUNT ID/default:system:SYSTEMNAME</code>
     * </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the system to be deleted.</p> <p>The ID should be in the following
     * format.</p> <p> <code>urn:tdm:REGION/ACCOUNT ID/default:system:SYSTEMNAME</code>
     * </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the system to be deleted.</p> <p>The ID should be in the following
     * format.</p> <p> <code>urn:tdm:REGION/ACCOUNT ID/default:system:SYSTEMNAME</code>
     * </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the system to be deleted.</p> <p>The ID should be in the following
     * format.</p> <p> <code>urn:tdm:REGION/ACCOUNT ID/default:system:SYSTEMNAME</code>
     * </p>
     */
    inline DeleteSystemTemplateRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the system to be deleted.</p> <p>The ID should be in the following
     * format.</p> <p> <code>urn:tdm:REGION/ACCOUNT ID/default:system:SYSTEMNAME</code>
     * </p>
     */
    inline DeleteSystemTemplateRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the system to be deleted.</p> <p>The ID should be in the following
     * format.</p> <p> <code>urn:tdm:REGION/ACCOUNT ID/default:system:SYSTEMNAME</code>
     * </p>
     */
    inline DeleteSystemTemplateRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws