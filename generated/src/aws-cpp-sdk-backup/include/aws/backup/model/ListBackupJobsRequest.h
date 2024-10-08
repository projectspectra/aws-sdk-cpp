﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/BackupJobState.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Backup
{
namespace Model
{

  /**
   */
  class ListBackupJobsRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API ListBackupJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBackupJobs"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;

    AWS_BACKUP_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListBackupJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBackupJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBackupJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to be returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListBackupJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only backup jobs that match the specified resource Amazon Resource
     * Name (ARN).</p>
     */
    inline const Aws::String& GetByResourceArn() const{ return m_byResourceArn; }
    inline bool ByResourceArnHasBeenSet() const { return m_byResourceArnHasBeenSet; }
    inline void SetByResourceArn(const Aws::String& value) { m_byResourceArnHasBeenSet = true; m_byResourceArn = value; }
    inline void SetByResourceArn(Aws::String&& value) { m_byResourceArnHasBeenSet = true; m_byResourceArn = std::move(value); }
    inline void SetByResourceArn(const char* value) { m_byResourceArnHasBeenSet = true; m_byResourceArn.assign(value); }
    inline ListBackupJobsRequest& WithByResourceArn(const Aws::String& value) { SetByResourceArn(value); return *this;}
    inline ListBackupJobsRequest& WithByResourceArn(Aws::String&& value) { SetByResourceArn(std::move(value)); return *this;}
    inline ListBackupJobsRequest& WithByResourceArn(const char* value) { SetByResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only backup jobs that are in the specified state.</p> <p>
     * <code>Completed with issues</code> is a status found only in the Backup console.
     * For API, this status refers to jobs with a state of <code>COMPLETED</code> and a
     * <code>MessageCategory</code> with a value other than <code>SUCCESS</code>; that
     * is, the status is completed but comes with a status message.</p> <p>To obtain
     * the job count for <code>Completed with issues</code>, run two GET requests, and
     * subtract the second, smaller number:</p> <p>GET
     * /backup-jobs/?state=COMPLETED</p> <p>GET
     * /backup-jobs/?messageCategory=SUCCESS&amp;state=COMPLETED</p>
     */
    inline const BackupJobState& GetByState() const{ return m_byState; }
    inline bool ByStateHasBeenSet() const { return m_byStateHasBeenSet; }
    inline void SetByState(const BackupJobState& value) { m_byStateHasBeenSet = true; m_byState = value; }
    inline void SetByState(BackupJobState&& value) { m_byStateHasBeenSet = true; m_byState = std::move(value); }
    inline ListBackupJobsRequest& WithByState(const BackupJobState& value) { SetByState(value); return *this;}
    inline ListBackupJobsRequest& WithByState(BackupJobState&& value) { SetByState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only backup jobs that will be stored in the specified backup vault.
     * Backup vaults are identified by names that are unique to the account used to
     * create them and the Amazon Web Services Region where they are created.</p>
     */
    inline const Aws::String& GetByBackupVaultName() const{ return m_byBackupVaultName; }
    inline bool ByBackupVaultNameHasBeenSet() const { return m_byBackupVaultNameHasBeenSet; }
    inline void SetByBackupVaultName(const Aws::String& value) { m_byBackupVaultNameHasBeenSet = true; m_byBackupVaultName = value; }
    inline void SetByBackupVaultName(Aws::String&& value) { m_byBackupVaultNameHasBeenSet = true; m_byBackupVaultName = std::move(value); }
    inline void SetByBackupVaultName(const char* value) { m_byBackupVaultNameHasBeenSet = true; m_byBackupVaultName.assign(value); }
    inline ListBackupJobsRequest& WithByBackupVaultName(const Aws::String& value) { SetByBackupVaultName(value); return *this;}
    inline ListBackupJobsRequest& WithByBackupVaultName(Aws::String&& value) { SetByBackupVaultName(std::move(value)); return *this;}
    inline ListBackupJobsRequest& WithByBackupVaultName(const char* value) { SetByBackupVaultName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only backup jobs that were created before the specified date.</p>
     */
    inline const Aws::Utils::DateTime& GetByCreatedBefore() const{ return m_byCreatedBefore; }
    inline bool ByCreatedBeforeHasBeenSet() const { return m_byCreatedBeforeHasBeenSet; }
    inline void SetByCreatedBefore(const Aws::Utils::DateTime& value) { m_byCreatedBeforeHasBeenSet = true; m_byCreatedBefore = value; }
    inline void SetByCreatedBefore(Aws::Utils::DateTime&& value) { m_byCreatedBeforeHasBeenSet = true; m_byCreatedBefore = std::move(value); }
    inline ListBackupJobsRequest& WithByCreatedBefore(const Aws::Utils::DateTime& value) { SetByCreatedBefore(value); return *this;}
    inline ListBackupJobsRequest& WithByCreatedBefore(Aws::Utils::DateTime&& value) { SetByCreatedBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only backup jobs that were created after the specified date.</p>
     */
    inline const Aws::Utils::DateTime& GetByCreatedAfter() const{ return m_byCreatedAfter; }
    inline bool ByCreatedAfterHasBeenSet() const { return m_byCreatedAfterHasBeenSet; }
    inline void SetByCreatedAfter(const Aws::Utils::DateTime& value) { m_byCreatedAfterHasBeenSet = true; m_byCreatedAfter = value; }
    inline void SetByCreatedAfter(Aws::Utils::DateTime&& value) { m_byCreatedAfterHasBeenSet = true; m_byCreatedAfter = std::move(value); }
    inline ListBackupJobsRequest& WithByCreatedAfter(const Aws::Utils::DateTime& value) { SetByCreatedAfter(value); return *this;}
    inline ListBackupJobsRequest& WithByCreatedAfter(Aws::Utils::DateTime&& value) { SetByCreatedAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only backup jobs for the specified resources:</p> <ul> <li> <p>
     * <code>Aurora</code> for Amazon Aurora</p> </li> <li> <p>
     * <code>CloudFormation</code> for CloudFormation</p> </li> <li> <p>
     * <code>DocumentDB</code> for Amazon DocumentDB (with MongoDB compatibility)</p>
     * </li> <li> <p> <code>DynamoDB</code> for Amazon DynamoDB</p> </li> <li> <p>
     * <code>EBS</code> for Amazon Elastic Block Store</p> </li> <li> <p>
     * <code>EC2</code> for Amazon Elastic Compute Cloud</p> </li> <li> <p>
     * <code>EFS</code> for Amazon Elastic File System</p> </li> <li> <p>
     * <code>FSx</code> for Amazon FSx</p> </li> <li> <p> <code>Neptune</code> for
     * Amazon Neptune</p> </li> <li> <p> <code>RDS</code> for Amazon Relational
     * Database Service</p> </li> <li> <p> <code>Redshift</code> for Amazon
     * Redshift</p> </li> <li> <p> <code>S3</code> for Amazon Simple Storage Service
     * (Amazon S3)</p> </li> <li> <p> <code>SAP HANA on Amazon EC2</code> for SAP HANA
     * databases on Amazon Elastic Compute Cloud instances</p> </li> <li> <p>
     * <code>Storage Gateway</code> for Storage Gateway</p> </li> <li> <p>
     * <code>Timestream</code> for Amazon Timestream</p> </li> <li> <p>
     * <code>VirtualMachine</code> for VMware virtual machines</p> </li> </ul>
     */
    inline const Aws::String& GetByResourceType() const{ return m_byResourceType; }
    inline bool ByResourceTypeHasBeenSet() const { return m_byResourceTypeHasBeenSet; }
    inline void SetByResourceType(const Aws::String& value) { m_byResourceTypeHasBeenSet = true; m_byResourceType = value; }
    inline void SetByResourceType(Aws::String&& value) { m_byResourceTypeHasBeenSet = true; m_byResourceType = std::move(value); }
    inline void SetByResourceType(const char* value) { m_byResourceTypeHasBeenSet = true; m_byResourceType.assign(value); }
    inline ListBackupJobsRequest& WithByResourceType(const Aws::String& value) { SetByResourceType(value); return *this;}
    inline ListBackupJobsRequest& WithByResourceType(Aws::String&& value) { SetByResourceType(std::move(value)); return *this;}
    inline ListBackupJobsRequest& WithByResourceType(const char* value) { SetByResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID to list the jobs from. Returns only backup jobs associated
     * with the specified account ID.</p> <p>If used from an Organizations management
     * account, passing <code>*</code> returns all jobs across the organization.</p>
     */
    inline const Aws::String& GetByAccountId() const{ return m_byAccountId; }
    inline bool ByAccountIdHasBeenSet() const { return m_byAccountIdHasBeenSet; }
    inline void SetByAccountId(const Aws::String& value) { m_byAccountIdHasBeenSet = true; m_byAccountId = value; }
    inline void SetByAccountId(Aws::String&& value) { m_byAccountIdHasBeenSet = true; m_byAccountId = std::move(value); }
    inline void SetByAccountId(const char* value) { m_byAccountIdHasBeenSet = true; m_byAccountId.assign(value); }
    inline ListBackupJobsRequest& WithByAccountId(const Aws::String& value) { SetByAccountId(value); return *this;}
    inline ListBackupJobsRequest& WithByAccountId(Aws::String&& value) { SetByAccountId(std::move(value)); return *this;}
    inline ListBackupJobsRequest& WithByAccountId(const char* value) { SetByAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only backup jobs completed after a date expressed in Unix format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetByCompleteAfter() const{ return m_byCompleteAfter; }
    inline bool ByCompleteAfterHasBeenSet() const { return m_byCompleteAfterHasBeenSet; }
    inline void SetByCompleteAfter(const Aws::Utils::DateTime& value) { m_byCompleteAfterHasBeenSet = true; m_byCompleteAfter = value; }
    inline void SetByCompleteAfter(Aws::Utils::DateTime&& value) { m_byCompleteAfterHasBeenSet = true; m_byCompleteAfter = std::move(value); }
    inline ListBackupJobsRequest& WithByCompleteAfter(const Aws::Utils::DateTime& value) { SetByCompleteAfter(value); return *this;}
    inline ListBackupJobsRequest& WithByCompleteAfter(Aws::Utils::DateTime&& value) { SetByCompleteAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only backup jobs completed before a date expressed in Unix format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetByCompleteBefore() const{ return m_byCompleteBefore; }
    inline bool ByCompleteBeforeHasBeenSet() const { return m_byCompleteBeforeHasBeenSet; }
    inline void SetByCompleteBefore(const Aws::Utils::DateTime& value) { m_byCompleteBeforeHasBeenSet = true; m_byCompleteBefore = value; }
    inline void SetByCompleteBefore(Aws::Utils::DateTime&& value) { m_byCompleteBeforeHasBeenSet = true; m_byCompleteBefore = std::move(value); }
    inline ListBackupJobsRequest& WithByCompleteBefore(const Aws::Utils::DateTime& value) { SetByCompleteBefore(value); return *this;}
    inline ListBackupJobsRequest& WithByCompleteBefore(Aws::Utils::DateTime&& value) { SetByCompleteBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a filter to list child (nested) jobs based on parent job ID.</p>
     */
    inline const Aws::String& GetByParentJobId() const{ return m_byParentJobId; }
    inline bool ByParentJobIdHasBeenSet() const { return m_byParentJobIdHasBeenSet; }
    inline void SetByParentJobId(const Aws::String& value) { m_byParentJobIdHasBeenSet = true; m_byParentJobId = value; }
    inline void SetByParentJobId(Aws::String&& value) { m_byParentJobIdHasBeenSet = true; m_byParentJobId = std::move(value); }
    inline void SetByParentJobId(const char* value) { m_byParentJobIdHasBeenSet = true; m_byParentJobId.assign(value); }
    inline ListBackupJobsRequest& WithByParentJobId(const Aws::String& value) { SetByParentJobId(value); return *this;}
    inline ListBackupJobsRequest& WithByParentJobId(Aws::String&& value) { SetByParentJobId(std::move(value)); return *this;}
    inline ListBackupJobsRequest& WithByParentJobId(const char* value) { SetByParentJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is an optional parameter that can be used to filter out jobs with a
     * MessageCategory which matches the value you input.</p> <p>Example strings may
     * include <code>AccessDenied</code>, <code>SUCCESS</code>,
     * <code>AGGREGATE_ALL</code>, and <code>InvalidParameters</code>.</p> <p>View <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/monitoring.html">Monitoring</a>
     * </p> <p>The wildcard () returns count of all message categories.</p> <p>
     * <code>AGGREGATE_ALL</code> aggregates job counts for all message categories and
     * returns the sum.</p>
     */
    inline const Aws::String& GetByMessageCategory() const{ return m_byMessageCategory; }
    inline bool ByMessageCategoryHasBeenSet() const { return m_byMessageCategoryHasBeenSet; }
    inline void SetByMessageCategory(const Aws::String& value) { m_byMessageCategoryHasBeenSet = true; m_byMessageCategory = value; }
    inline void SetByMessageCategory(Aws::String&& value) { m_byMessageCategoryHasBeenSet = true; m_byMessageCategory = std::move(value); }
    inline void SetByMessageCategory(const char* value) { m_byMessageCategoryHasBeenSet = true; m_byMessageCategory.assign(value); }
    inline ListBackupJobsRequest& WithByMessageCategory(const Aws::String& value) { SetByMessageCategory(value); return *this;}
    inline ListBackupJobsRequest& WithByMessageCategory(Aws::String&& value) { SetByMessageCategory(std::move(value)); return *this;}
    inline ListBackupJobsRequest& WithByMessageCategory(const char* value) { SetByMessageCategory(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_byResourceArn;
    bool m_byResourceArnHasBeenSet = false;

    BackupJobState m_byState;
    bool m_byStateHasBeenSet = false;

    Aws::String m_byBackupVaultName;
    bool m_byBackupVaultNameHasBeenSet = false;

    Aws::Utils::DateTime m_byCreatedBefore;
    bool m_byCreatedBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_byCreatedAfter;
    bool m_byCreatedAfterHasBeenSet = false;

    Aws::String m_byResourceType;
    bool m_byResourceTypeHasBeenSet = false;

    Aws::String m_byAccountId;
    bool m_byAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_byCompleteAfter;
    bool m_byCompleteAfterHasBeenSet = false;

    Aws::Utils::DateTime m_byCompleteBefore;
    bool m_byCompleteBeforeHasBeenSet = false;

    Aws::String m_byParentJobId;
    bool m_byParentJobIdHasBeenSet = false;

    Aws::String m_byMessageCategory;
    bool m_byMessageCategoryHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
