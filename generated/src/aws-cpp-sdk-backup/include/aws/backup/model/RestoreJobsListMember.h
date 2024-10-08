﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup/model/RestoreJobStatus.h>
#include <aws/backup/model/RestoreJobCreator.h>
#include <aws/backup/model/RestoreValidationStatus.h>
#include <aws/backup/model/RestoreDeletionStatus.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>Contains metadata about a restore job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/RestoreJobsListMember">AWS
   * API Reference</a></p>
   */
  class RestoreJobsListMember
  {
  public:
    AWS_BACKUP_API RestoreJobsListMember();
    AWS_BACKUP_API RestoreJobsListMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RestoreJobsListMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account ID that owns the restore job.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline RestoreJobsListMember& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline RestoreJobsListMember& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline RestoreJobsListMember& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline const Aws::String& GetRestoreJobId() const{ return m_restoreJobId; }
    inline bool RestoreJobIdHasBeenSet() const { return m_restoreJobIdHasBeenSet; }
    inline void SetRestoreJobId(const Aws::String& value) { m_restoreJobIdHasBeenSet = true; m_restoreJobId = value; }
    inline void SetRestoreJobId(Aws::String&& value) { m_restoreJobIdHasBeenSet = true; m_restoreJobId = std::move(value); }
    inline void SetRestoreJobId(const char* value) { m_restoreJobIdHasBeenSet = true; m_restoreJobId.assign(value); }
    inline RestoreJobsListMember& WithRestoreJobId(const Aws::String& value) { SetRestoreJobId(value); return *this;}
    inline RestoreJobsListMember& WithRestoreJobId(Aws::String&& value) { SetRestoreJobId(std::move(value)); return *this;}
    inline RestoreJobsListMember& WithRestoreJobId(const char* value) { SetRestoreJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const{ return m_recoveryPointArn; }
    inline bool RecoveryPointArnHasBeenSet() const { return m_recoveryPointArnHasBeenSet; }
    inline void SetRecoveryPointArn(const Aws::String& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = value; }
    inline void SetRecoveryPointArn(Aws::String&& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = std::move(value); }
    inline void SetRecoveryPointArn(const char* value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn.assign(value); }
    inline RestoreJobsListMember& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}
    inline RestoreJobsListMember& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}
    inline RestoreJobsListMember& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a restore job is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline RestoreJobsListMember& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline RestoreJobsListMember& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a job to restore a recovery point is completed, in Unix
     * format and Coordinated Universal Time (UTC). The value of
     * <code>CompletionDate</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDate() const{ return m_completionDate; }
    inline bool CompletionDateHasBeenSet() const { return m_completionDateHasBeenSet; }
    inline void SetCompletionDate(const Aws::Utils::DateTime& value) { m_completionDateHasBeenSet = true; m_completionDate = value; }
    inline void SetCompletionDate(Aws::Utils::DateTime&& value) { m_completionDateHasBeenSet = true; m_completionDate = std::move(value); }
    inline RestoreJobsListMember& WithCompletionDate(const Aws::Utils::DateTime& value) { SetCompletionDate(value); return *this;}
    inline RestoreJobsListMember& WithCompletionDate(Aws::Utils::DateTime&& value) { SetCompletionDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status code specifying the state of the job initiated by Backup to restore
     * a recovery point.</p>
     */
    inline const RestoreJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const RestoreJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(RestoreJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline RestoreJobsListMember& WithStatus(const RestoreJobStatus& value) { SetStatus(value); return *this;}
    inline RestoreJobsListMember& WithStatus(RestoreJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed message explaining the status of the job to restore a recovery
     * point.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline RestoreJobsListMember& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline RestoreJobsListMember& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline RestoreJobsListMember& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains an estimated percentage complete of a job at the time the job status
     * was queried.</p>
     */
    inline const Aws::String& GetPercentDone() const{ return m_percentDone; }
    inline bool PercentDoneHasBeenSet() const { return m_percentDoneHasBeenSet; }
    inline void SetPercentDone(const Aws::String& value) { m_percentDoneHasBeenSet = true; m_percentDone = value; }
    inline void SetPercentDone(Aws::String&& value) { m_percentDoneHasBeenSet = true; m_percentDone = std::move(value); }
    inline void SetPercentDone(const char* value) { m_percentDoneHasBeenSet = true; m_percentDone.assign(value); }
    inline RestoreJobsListMember& WithPercentDone(const Aws::String& value) { SetPercentDone(value); return *this;}
    inline RestoreJobsListMember& WithPercentDone(Aws::String&& value) { SetPercentDone(std::move(value)); return *this;}
    inline RestoreJobsListMember& WithPercentDone(const char* value) { SetPercentDone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of the restored resource.</p>
     */
    inline long long GetBackupSizeInBytes() const{ return m_backupSizeInBytes; }
    inline bool BackupSizeInBytesHasBeenSet() const { return m_backupSizeInBytesHasBeenSet; }
    inline void SetBackupSizeInBytes(long long value) { m_backupSizeInBytesHasBeenSet = true; m_backupSizeInBytes = value; }
    inline RestoreJobsListMember& WithBackupSizeInBytes(long long value) { SetBackupSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role ARN used to create the target recovery point; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }
    inline RestoreJobsListMember& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline RestoreJobsListMember& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline RestoreJobsListMember& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time in minutes that a job restoring a recovery point is
     * expected to take.</p>
     */
    inline long long GetExpectedCompletionTimeMinutes() const{ return m_expectedCompletionTimeMinutes; }
    inline bool ExpectedCompletionTimeMinutesHasBeenSet() const { return m_expectedCompletionTimeMinutesHasBeenSet; }
    inline void SetExpectedCompletionTimeMinutes(long long value) { m_expectedCompletionTimeMinutesHasBeenSet = true; m_expectedCompletionTimeMinutes = value; }
    inline RestoreJobsListMember& WithExpectedCompletionTimeMinutes(long long value) { SetExpectedCompletionTimeMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline const Aws::String& GetCreatedResourceArn() const{ return m_createdResourceArn; }
    inline bool CreatedResourceArnHasBeenSet() const { return m_createdResourceArnHasBeenSet; }
    inline void SetCreatedResourceArn(const Aws::String& value) { m_createdResourceArnHasBeenSet = true; m_createdResourceArn = value; }
    inline void SetCreatedResourceArn(Aws::String&& value) { m_createdResourceArnHasBeenSet = true; m_createdResourceArn = std::move(value); }
    inline void SetCreatedResourceArn(const char* value) { m_createdResourceArnHasBeenSet = true; m_createdResourceArn.assign(value); }
    inline RestoreJobsListMember& WithCreatedResourceArn(const Aws::String& value) { SetCreatedResourceArn(value); return *this;}
    inline RestoreJobsListMember& WithCreatedResourceArn(Aws::String&& value) { SetCreatedResourceArn(std::move(value)); return *this;}
    inline RestoreJobsListMember& WithCreatedResourceArn(const char* value) { SetCreatedResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type of the listed restore jobs; for example, an Amazon Elastic
     * Block Store (Amazon EBS) volume or an Amazon Relational Database Service (Amazon
     * RDS) database. For Windows Volume Shadow Copy Service (VSS) backups, the only
     * supported resource type is Amazon EC2.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline RestoreJobsListMember& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline RestoreJobsListMember& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline RestoreJobsListMember& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which a recovery point was created.</p>
     */
    inline const Aws::Utils::DateTime& GetRecoveryPointCreationDate() const{ return m_recoveryPointCreationDate; }
    inline bool RecoveryPointCreationDateHasBeenSet() const { return m_recoveryPointCreationDateHasBeenSet; }
    inline void SetRecoveryPointCreationDate(const Aws::Utils::DateTime& value) { m_recoveryPointCreationDateHasBeenSet = true; m_recoveryPointCreationDate = value; }
    inline void SetRecoveryPointCreationDate(Aws::Utils::DateTime&& value) { m_recoveryPointCreationDateHasBeenSet = true; m_recoveryPointCreationDate = std::move(value); }
    inline RestoreJobsListMember& WithRecoveryPointCreationDate(const Aws::Utils::DateTime& value) { SetRecoveryPointCreationDate(value); return *this;}
    inline RestoreJobsListMember& WithRecoveryPointCreationDate(Aws::Utils::DateTime&& value) { SetRecoveryPointCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains identifying information about the creation of a restore job.</p>
     */
    inline const RestoreJobCreator& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const RestoreJobCreator& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(RestoreJobCreator&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline RestoreJobsListMember& WithCreatedBy(const RestoreJobCreator& value) { SetCreatedBy(value); return *this;}
    inline RestoreJobsListMember& WithCreatedBy(RestoreJobCreator&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of validation run on the indicated restore job.</p>
     */
    inline const RestoreValidationStatus& GetValidationStatus() const{ return m_validationStatus; }
    inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }
    inline void SetValidationStatus(const RestoreValidationStatus& value) { m_validationStatusHasBeenSet = true; m_validationStatus = value; }
    inline void SetValidationStatus(RestoreValidationStatus&& value) { m_validationStatusHasBeenSet = true; m_validationStatus = std::move(value); }
    inline RestoreJobsListMember& WithValidationStatus(const RestoreValidationStatus& value) { SetValidationStatus(value); return *this;}
    inline RestoreJobsListMember& WithValidationStatus(RestoreValidationStatus&& value) { SetValidationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This describes the status of validation run on the indicated restore job.</p>
     */
    inline const Aws::String& GetValidationStatusMessage() const{ return m_validationStatusMessage; }
    inline bool ValidationStatusMessageHasBeenSet() const { return m_validationStatusMessageHasBeenSet; }
    inline void SetValidationStatusMessage(const Aws::String& value) { m_validationStatusMessageHasBeenSet = true; m_validationStatusMessage = value; }
    inline void SetValidationStatusMessage(Aws::String&& value) { m_validationStatusMessageHasBeenSet = true; m_validationStatusMessage = std::move(value); }
    inline void SetValidationStatusMessage(const char* value) { m_validationStatusMessageHasBeenSet = true; m_validationStatusMessage.assign(value); }
    inline RestoreJobsListMember& WithValidationStatusMessage(const Aws::String& value) { SetValidationStatusMessage(value); return *this;}
    inline RestoreJobsListMember& WithValidationStatusMessage(Aws::String&& value) { SetValidationStatusMessage(std::move(value)); return *this;}
    inline RestoreJobsListMember& WithValidationStatusMessage(const char* value) { SetValidationStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This notes the status of the data generated by the restore test. The status
     * may be <code>Deleting</code>, <code>Failed</code>, or
     * <code>Successful</code>.</p>
     */
    inline const RestoreDeletionStatus& GetDeletionStatus() const{ return m_deletionStatus; }
    inline bool DeletionStatusHasBeenSet() const { return m_deletionStatusHasBeenSet; }
    inline void SetDeletionStatus(const RestoreDeletionStatus& value) { m_deletionStatusHasBeenSet = true; m_deletionStatus = value; }
    inline void SetDeletionStatus(RestoreDeletionStatus&& value) { m_deletionStatusHasBeenSet = true; m_deletionStatus = std::move(value); }
    inline RestoreJobsListMember& WithDeletionStatus(const RestoreDeletionStatus& value) { SetDeletionStatus(value); return *this;}
    inline RestoreJobsListMember& WithDeletionStatus(RestoreDeletionStatus&& value) { SetDeletionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This describes the restore job deletion status.</p>
     */
    inline const Aws::String& GetDeletionStatusMessage() const{ return m_deletionStatusMessage; }
    inline bool DeletionStatusMessageHasBeenSet() const { return m_deletionStatusMessageHasBeenSet; }
    inline void SetDeletionStatusMessage(const Aws::String& value) { m_deletionStatusMessageHasBeenSet = true; m_deletionStatusMessage = value; }
    inline void SetDeletionStatusMessage(Aws::String&& value) { m_deletionStatusMessageHasBeenSet = true; m_deletionStatusMessage = std::move(value); }
    inline void SetDeletionStatusMessage(const char* value) { m_deletionStatusMessageHasBeenSet = true; m_deletionStatusMessage.assign(value); }
    inline RestoreJobsListMember& WithDeletionStatusMessage(const Aws::String& value) { SetDeletionStatusMessage(value); return *this;}
    inline RestoreJobsListMember& WithDeletionStatusMessage(Aws::String&& value) { SetDeletionStatusMessage(std::move(value)); return *this;}
    inline RestoreJobsListMember& WithDeletionStatusMessage(const char* value) { SetDeletionStatusMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_restoreJobId;
    bool m_restoreJobIdHasBeenSet = false;

    Aws::String m_recoveryPointArn;
    bool m_recoveryPointArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_completionDate;
    bool m_completionDateHasBeenSet = false;

    RestoreJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_percentDone;
    bool m_percentDoneHasBeenSet = false;

    long long m_backupSizeInBytes;
    bool m_backupSizeInBytesHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    long long m_expectedCompletionTimeMinutes;
    bool m_expectedCompletionTimeMinutesHasBeenSet = false;

    Aws::String m_createdResourceArn;
    bool m_createdResourceArnHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_recoveryPointCreationDate;
    bool m_recoveryPointCreationDateHasBeenSet = false;

    RestoreJobCreator m_createdBy;
    bool m_createdByHasBeenSet = false;

    RestoreValidationStatus m_validationStatus;
    bool m_validationStatusHasBeenSet = false;

    Aws::String m_validationStatusMessage;
    bool m_validationStatusMessageHasBeenSet = false;

    RestoreDeletionStatus m_deletionStatus;
    bool m_deletionStatusHasBeenSet = false;

    Aws::String m_deletionStatusMessage;
    bool m_deletionStatusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
