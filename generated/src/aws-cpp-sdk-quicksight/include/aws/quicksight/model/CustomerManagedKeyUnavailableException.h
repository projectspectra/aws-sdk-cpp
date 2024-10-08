﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The customer managed key that is registered to your Amazon QuickSight account
   * is unavailable.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CustomerManagedKeyUnavailableException">AWS
   * API Reference</a></p>
   */
  class CustomerManagedKeyUnavailableException
  {
  public:
    AWS_QUICKSIGHT_API CustomerManagedKeyUnavailableException();
    AWS_QUICKSIGHT_API CustomerManagedKeyUnavailableException(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CustomerManagedKeyUnavailableException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline CustomerManagedKeyUnavailableException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline CustomerManagedKeyUnavailableException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline CustomerManagedKeyUnavailableException& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline CustomerManagedKeyUnavailableException& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CustomerManagedKeyUnavailableException& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CustomerManagedKeyUnavailableException& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
