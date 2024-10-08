﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/BackupVaultEvent.h>
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
namespace Backup
{
namespace Model
{
  class GetBackupVaultNotificationsResult
  {
  public:
    AWS_BACKUP_API GetBackupVaultNotificationsResult();
    AWS_BACKUP_API GetBackupVaultNotificationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetBackupVaultNotificationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultName = value; }
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultName = std::move(value); }
    inline void SetBackupVaultName(const char* value) { m_backupVaultName.assign(value); }
    inline GetBackupVaultNotificationsResult& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}
    inline GetBackupVaultNotificationsResult& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}
    inline GetBackupVaultNotificationsResult& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:backup-vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetBackupVaultArn() const{ return m_backupVaultArn; }
    inline void SetBackupVaultArn(const Aws::String& value) { m_backupVaultArn = value; }
    inline void SetBackupVaultArn(Aws::String&& value) { m_backupVaultArn = std::move(value); }
    inline void SetBackupVaultArn(const char* value) { m_backupVaultArn.assign(value); }
    inline GetBackupVaultNotificationsResult& WithBackupVaultArn(const Aws::String& value) { SetBackupVaultArn(value); return *this;}
    inline GetBackupVaultNotificationsResult& WithBackupVaultArn(Aws::String&& value) { SetBackupVaultArn(std::move(value)); return *this;}
    inline GetBackupVaultNotificationsResult& WithBackupVaultArn(const char* value) { SetBackupVaultArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies an Amazon Simple Notification Service (Amazon
     * SNS) topic; for example,
     * <code>arn:aws:sns:us-west-2:111122223333:MyTopic</code>.</p>
     */
    inline const Aws::String& GetSNSTopicArn() const{ return m_sNSTopicArn; }
    inline void SetSNSTopicArn(const Aws::String& value) { m_sNSTopicArn = value; }
    inline void SetSNSTopicArn(Aws::String&& value) { m_sNSTopicArn = std::move(value); }
    inline void SetSNSTopicArn(const char* value) { m_sNSTopicArn.assign(value); }
    inline GetBackupVaultNotificationsResult& WithSNSTopicArn(const Aws::String& value) { SetSNSTopicArn(value); return *this;}
    inline GetBackupVaultNotificationsResult& WithSNSTopicArn(Aws::String&& value) { SetSNSTopicArn(std::move(value)); return *this;}
    inline GetBackupVaultNotificationsResult& WithSNSTopicArn(const char* value) { SetSNSTopicArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p>
     */
    inline const Aws::Vector<BackupVaultEvent>& GetBackupVaultEvents() const{ return m_backupVaultEvents; }
    inline void SetBackupVaultEvents(const Aws::Vector<BackupVaultEvent>& value) { m_backupVaultEvents = value; }
    inline void SetBackupVaultEvents(Aws::Vector<BackupVaultEvent>&& value) { m_backupVaultEvents = std::move(value); }
    inline GetBackupVaultNotificationsResult& WithBackupVaultEvents(const Aws::Vector<BackupVaultEvent>& value) { SetBackupVaultEvents(value); return *this;}
    inline GetBackupVaultNotificationsResult& WithBackupVaultEvents(Aws::Vector<BackupVaultEvent>&& value) { SetBackupVaultEvents(std::move(value)); return *this;}
    inline GetBackupVaultNotificationsResult& AddBackupVaultEvents(const BackupVaultEvent& value) { m_backupVaultEvents.push_back(value); return *this; }
    inline GetBackupVaultNotificationsResult& AddBackupVaultEvents(BackupVaultEvent&& value) { m_backupVaultEvents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBackupVaultNotificationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBackupVaultNotificationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBackupVaultNotificationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_backupVaultName;

    Aws::String m_backupVaultArn;

    Aws::String m_sNSTopicArn;

    Aws::Vector<BackupVaultEvent> m_backupVaultEvents;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
