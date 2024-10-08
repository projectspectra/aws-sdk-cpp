﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for
   * DescribeNetworkInterfacePermissions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfacePermissionsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeNetworkInterfacePermissionsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeNetworkInterfacePermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNetworkInterfacePermissions"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The network interface permission IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInterfacePermissionIds() const{ return m_networkInterfacePermissionIds; }
    inline bool NetworkInterfacePermissionIdsHasBeenSet() const { return m_networkInterfacePermissionIdsHasBeenSet; }
    inline void SetNetworkInterfacePermissionIds(const Aws::Vector<Aws::String>& value) { m_networkInterfacePermissionIdsHasBeenSet = true; m_networkInterfacePermissionIds = value; }
    inline void SetNetworkInterfacePermissionIds(Aws::Vector<Aws::String>&& value) { m_networkInterfacePermissionIdsHasBeenSet = true; m_networkInterfacePermissionIds = std::move(value); }
    inline DescribeNetworkInterfacePermissionsRequest& WithNetworkInterfacePermissionIds(const Aws::Vector<Aws::String>& value) { SetNetworkInterfacePermissionIds(value); return *this;}
    inline DescribeNetworkInterfacePermissionsRequest& WithNetworkInterfacePermissionIds(Aws::Vector<Aws::String>&& value) { SetNetworkInterfacePermissionIds(std::move(value)); return *this;}
    inline DescribeNetworkInterfacePermissionsRequest& AddNetworkInterfacePermissionIds(const Aws::String& value) { m_networkInterfacePermissionIdsHasBeenSet = true; m_networkInterfacePermissionIds.push_back(value); return *this; }
    inline DescribeNetworkInterfacePermissionsRequest& AddNetworkInterfacePermissionIds(Aws::String&& value) { m_networkInterfacePermissionIdsHasBeenSet = true; m_networkInterfacePermissionIds.push_back(std::move(value)); return *this; }
    inline DescribeNetworkInterfacePermissionsRequest& AddNetworkInterfacePermissionIds(const char* value) { m_networkInterfacePermissionIdsHasBeenSet = true; m_networkInterfacePermissionIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>network-interface-permission.network-interface-permission-id</code> - The
     * ID of the permission.</p> </li> <li> <p>
     * <code>network-interface-permission.network-interface-id</code> - The ID of the
     * network interface.</p> </li> <li> <p>
     * <code>network-interface-permission.aws-account-id</code> - The Amazon Web
     * Services account ID.</p> </li> <li> <p>
     * <code>network-interface-permission.aws-service</code> - The Amazon Web Services
     * service.</p> </li> <li> <p> <code>network-interface-permission.permission</code>
     * - The type of permission (<code>INSTANCE-ATTACH</code> |
     * <code>EIP-ASSOCIATE</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeNetworkInterfacePermissionsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeNetworkInterfacePermissionsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeNetworkInterfacePermissionsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeNetworkInterfacePermissionsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeNetworkInterfacePermissionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeNetworkInterfacePermissionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeNetworkInterfacePermissionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. If this
     * parameter is not specified, up to 50 results are returned by default. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeNetworkInterfacePermissionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_networkInterfacePermissionIds;
    bool m_networkInterfacePermissionIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
