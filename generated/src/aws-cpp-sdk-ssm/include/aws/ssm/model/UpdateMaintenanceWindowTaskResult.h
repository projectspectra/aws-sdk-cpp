﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/MaintenanceWindowTaskInvocationParameters.h>
#include <aws/ssm/model/LoggingInfo.h>
#include <aws/ssm/model/MaintenanceWindowTaskCutoffBehavior.h>
#include <aws/ssm/model/AlarmConfiguration.h>
#include <aws/ssm/model/Target.h>
#include <aws/ssm/model/MaintenanceWindowTaskParameterValueExpression.h>
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
namespace SSM
{
namespace Model
{
  class UpdateMaintenanceWindowTaskResult
  {
  public:
    AWS_SSM_API UpdateMaintenanceWindowTaskResult();
    AWS_SSM_API UpdateMaintenanceWindowTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API UpdateMaintenanceWindowTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the maintenance window that was updated.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }
    inline void SetWindowId(const Aws::String& value) { m_windowId = value; }
    inline void SetWindowId(Aws::String&& value) { m_windowId = std::move(value); }
    inline void SetWindowId(const char* value) { m_windowId.assign(value); }
    inline UpdateMaintenanceWindowTaskResult& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithWindowId(const char* value) { SetWindowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task ID of the maintenance window that was updated.</p>
     */
    inline const Aws::String& GetWindowTaskId() const{ return m_windowTaskId; }
    inline void SetWindowTaskId(const Aws::String& value) { m_windowTaskId = value; }
    inline void SetWindowTaskId(Aws::String&& value) { m_windowTaskId = std::move(value); }
    inline void SetWindowTaskId(const char* value) { m_windowTaskId.assign(value); }
    inline UpdateMaintenanceWindowTaskResult& WithWindowTaskId(const Aws::String& value) { SetWindowTaskId(value); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithWindowTaskId(Aws::String&& value) { SetWindowTaskId(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithWindowTaskId(const char* value) { SetWindowTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated target values.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targets = value; }
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targets = std::move(value); }
    inline UpdateMaintenanceWindowTaskResult& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTaskResult& AddTargets(const Target& value) { m_targets.push_back(value); return *this; }
    inline UpdateMaintenanceWindowTaskResult& AddTargets(Target&& value) { m_targets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The updated task ARN value.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }
    inline void SetTaskArn(const Aws::String& value) { m_taskArn = value; }
    inline void SetTaskArn(Aws::String&& value) { m_taskArn = std::move(value); }
    inline void SetTaskArn(const char* value) { m_taskArn.assign(value); }
    inline UpdateMaintenanceWindowTaskResult& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role for Amazon Web
     * Services Systems Manager to assume when running a maintenance window task. If
     * you do not specify a service role ARN, Systems Manager uses a service-linked
     * role in your account. If no appropriate service-linked role for Systems Manager
     * exists in your account, it is created when you run
     * <code>RegisterTaskWithMaintenanceWindow</code>.</p> <p>However, for an improved
     * security posture, we strongly recommend creating a custom policy and custom
     * service role for running your maintenance window tasks. The policy can be
     * crafted to provide only the permissions needed for your particular maintenance
     * window tasks. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-maintenance-permissions.html">Setting
     * up maintenance windows</a> in the in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArn = value; }
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArn = std::move(value); }
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArn.assign(value); }
    inline UpdateMaintenanceWindowTaskResult& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated parameter values.</p>  <p> <code>TaskParameters</code> has
     * been deprecated. To specify parameters to pass to a task when it runs, instead
     * use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& GetTaskParameters() const{ return m_taskParameters; }
    inline void SetTaskParameters(const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& value) { m_taskParameters = value; }
    inline void SetTaskParameters(Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>&& value) { m_taskParameters = std::move(value); }
    inline UpdateMaintenanceWindowTaskResult& WithTaskParameters(const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& value) { SetTaskParameters(value); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithTaskParameters(Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>&& value) { SetTaskParameters(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTaskResult& AddTaskParameters(const Aws::String& key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParameters.emplace(key, value); return *this; }
    inline UpdateMaintenanceWindowTaskResult& AddTaskParameters(Aws::String&& key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParameters.emplace(std::move(key), value); return *this; }
    inline UpdateMaintenanceWindowTaskResult& AddTaskParameters(const Aws::String& key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParameters.emplace(key, std::move(value)); return *this; }
    inline UpdateMaintenanceWindowTaskResult& AddTaskParameters(Aws::String&& key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateMaintenanceWindowTaskResult& AddTaskParameters(const char* key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParameters.emplace(key, std::move(value)); return *this; }
    inline UpdateMaintenanceWindowTaskResult& AddTaskParameters(const char* key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The updated parameter values.</p>
     */
    inline const MaintenanceWindowTaskInvocationParameters& GetTaskInvocationParameters() const{ return m_taskInvocationParameters; }
    inline void SetTaskInvocationParameters(const MaintenanceWindowTaskInvocationParameters& value) { m_taskInvocationParameters = value; }
    inline void SetTaskInvocationParameters(MaintenanceWindowTaskInvocationParameters&& value) { m_taskInvocationParameters = std::move(value); }
    inline UpdateMaintenanceWindowTaskResult& WithTaskInvocationParameters(const MaintenanceWindowTaskInvocationParameters& value) { SetTaskInvocationParameters(value); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithTaskInvocationParameters(MaintenanceWindowTaskInvocationParameters&& value) { SetTaskInvocationParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated priority value.</p>
     */
    inline int GetPriority() const{ return m_priority; }
    inline void SetPriority(int value) { m_priority = value; }
    inline UpdateMaintenanceWindowTaskResult& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated <code>MaxConcurrency</code> value.</p>
     */
    inline const Aws::String& GetMaxConcurrency() const{ return m_maxConcurrency; }
    inline void SetMaxConcurrency(const Aws::String& value) { m_maxConcurrency = value; }
    inline void SetMaxConcurrency(Aws::String&& value) { m_maxConcurrency = std::move(value); }
    inline void SetMaxConcurrency(const char* value) { m_maxConcurrency.assign(value); }
    inline UpdateMaintenanceWindowTaskResult& WithMaxConcurrency(const Aws::String& value) { SetMaxConcurrency(value); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithMaxConcurrency(const char* value) { SetMaxConcurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated <code>MaxErrors</code> value.</p>
     */
    inline const Aws::String& GetMaxErrors() const{ return m_maxErrors; }
    inline void SetMaxErrors(const Aws::String& value) { m_maxErrors = value; }
    inline void SetMaxErrors(Aws::String&& value) { m_maxErrors = std::move(value); }
    inline void SetMaxErrors(const char* value) { m_maxErrors.assign(value); }
    inline UpdateMaintenanceWindowTaskResult& WithMaxErrors(const Aws::String& value) { SetMaxErrors(value); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithMaxErrors(Aws::String&& value) { SetMaxErrors(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated logging information in Amazon S3.</p>  <p>
     * <code>LoggingInfo</code> has been deprecated. To specify an Amazon Simple
     * Storage Service (Amazon S3) bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Amazon Web Services Systems Manager handles these options for the supported
     * maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline const LoggingInfo& GetLoggingInfo() const{ return m_loggingInfo; }
    inline void SetLoggingInfo(const LoggingInfo& value) { m_loggingInfo = value; }
    inline void SetLoggingInfo(LoggingInfo&& value) { m_loggingInfo = std::move(value); }
    inline UpdateMaintenanceWindowTaskResult& WithLoggingInfo(const LoggingInfo& value) { SetLoggingInfo(value); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithLoggingInfo(LoggingInfo&& value) { SetLoggingInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated task name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateMaintenanceWindowTaskResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated task description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateMaintenanceWindowTaskResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specification for whether tasks should continue to run after the cutoff
     * time specified in the maintenance windows is reached. </p>
     */
    inline const MaintenanceWindowTaskCutoffBehavior& GetCutoffBehavior() const{ return m_cutoffBehavior; }
    inline void SetCutoffBehavior(const MaintenanceWindowTaskCutoffBehavior& value) { m_cutoffBehavior = value; }
    inline void SetCutoffBehavior(MaintenanceWindowTaskCutoffBehavior&& value) { m_cutoffBehavior = std::move(value); }
    inline UpdateMaintenanceWindowTaskResult& WithCutoffBehavior(const MaintenanceWindowTaskCutoffBehavior& value) { SetCutoffBehavior(value); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithCutoffBehavior(MaintenanceWindowTaskCutoffBehavior&& value) { SetCutoffBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for the CloudWatch alarm you applied to your maintenance window
     * task.</p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const{ return m_alarmConfiguration; }
    inline void SetAlarmConfiguration(const AlarmConfiguration& value) { m_alarmConfiguration = value; }
    inline void SetAlarmConfiguration(AlarmConfiguration&& value) { m_alarmConfiguration = std::move(value); }
    inline UpdateMaintenanceWindowTaskResult& WithAlarmConfiguration(const AlarmConfiguration& value) { SetAlarmConfiguration(value); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithAlarmConfiguration(AlarmConfiguration&& value) { SetAlarmConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateMaintenanceWindowTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_windowId;

    Aws::String m_windowTaskId;

    Aws::Vector<Target> m_targets;

    Aws::String m_taskArn;

    Aws::String m_serviceRoleArn;

    Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression> m_taskParameters;

    MaintenanceWindowTaskInvocationParameters m_taskInvocationParameters;

    int m_priority;

    Aws::String m_maxConcurrency;

    Aws::String m_maxErrors;

    LoggingInfo m_loggingInfo;

    Aws::String m_name;

    Aws::String m_description;

    MaintenanceWindowTaskCutoffBehavior m_cutoffBehavior;

    AlarmConfiguration m_alarmConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
