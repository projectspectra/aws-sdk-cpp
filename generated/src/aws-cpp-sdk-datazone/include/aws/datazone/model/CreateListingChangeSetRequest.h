﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/datazone/model/ChangeAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/EntityType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class CreateListingChangeSetRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateListingChangeSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateListingChangeSet"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies whether to publish or unpublish a listing.</p>
     */
    inline const ChangeAction& GetAction() const{ return m_action; }

    /**
     * <p>Specifies whether to publish or unpublish a listing.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specifies whether to publish or unpublish a listing.</p>
     */
    inline void SetAction(const ChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies whether to publish or unpublish a listing.</p>
     */
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specifies whether to publish or unpublish a listing.</p>
     */
    inline CreateListingChangeSetRequest& WithAction(const ChangeAction& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies whether to publish or unpublish a listing.</p>
     */
    inline CreateListingChangeSetRequest& WithAction(ChangeAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateListingChangeSetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateListingChangeSetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateListingChangeSetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The ID of the Amazon DataZone domain.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The ID of the Amazon DataZone domain.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The ID of the Amazon DataZone domain.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain.</p>
     */
    inline CreateListingChangeSetRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain.</p>
     */
    inline CreateListingChangeSetRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain.</p>
     */
    inline CreateListingChangeSetRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The ID of the asset.</p>
     */
    inline const Aws::String& GetEntityIdentifier() const{ return m_entityIdentifier; }

    /**
     * <p>The ID of the asset.</p>
     */
    inline bool EntityIdentifierHasBeenSet() const { return m_entityIdentifierHasBeenSet; }

    /**
     * <p>The ID of the asset.</p>
     */
    inline void SetEntityIdentifier(const Aws::String& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = value; }

    /**
     * <p>The ID of the asset.</p>
     */
    inline void SetEntityIdentifier(Aws::String&& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = std::move(value); }

    /**
     * <p>The ID of the asset.</p>
     */
    inline void SetEntityIdentifier(const char* value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier.assign(value); }

    /**
     * <p>The ID of the asset.</p>
     */
    inline CreateListingChangeSetRequest& WithEntityIdentifier(const Aws::String& value) { SetEntityIdentifier(value); return *this;}

    /**
     * <p>The ID of the asset.</p>
     */
    inline CreateListingChangeSetRequest& WithEntityIdentifier(Aws::String&& value) { SetEntityIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset.</p>
     */
    inline CreateListingChangeSetRequest& WithEntityIdentifier(const char* value) { SetEntityIdentifier(value); return *this;}


    /**
     * <p>The revision of an asset.</p>
     */
    inline const Aws::String& GetEntityRevision() const{ return m_entityRevision; }

    /**
     * <p>The revision of an asset.</p>
     */
    inline bool EntityRevisionHasBeenSet() const { return m_entityRevisionHasBeenSet; }

    /**
     * <p>The revision of an asset.</p>
     */
    inline void SetEntityRevision(const Aws::String& value) { m_entityRevisionHasBeenSet = true; m_entityRevision = value; }

    /**
     * <p>The revision of an asset.</p>
     */
    inline void SetEntityRevision(Aws::String&& value) { m_entityRevisionHasBeenSet = true; m_entityRevision = std::move(value); }

    /**
     * <p>The revision of an asset.</p>
     */
    inline void SetEntityRevision(const char* value) { m_entityRevisionHasBeenSet = true; m_entityRevision.assign(value); }

    /**
     * <p>The revision of an asset.</p>
     */
    inline CreateListingChangeSetRequest& WithEntityRevision(const Aws::String& value) { SetEntityRevision(value); return *this;}

    /**
     * <p>The revision of an asset.</p>
     */
    inline CreateListingChangeSetRequest& WithEntityRevision(Aws::String&& value) { SetEntityRevision(std::move(value)); return *this;}

    /**
     * <p>The revision of an asset.</p>
     */
    inline CreateListingChangeSetRequest& WithEntityRevision(const char* value) { SetEntityRevision(value); return *this;}


    /**
     * <p>The type of an entity.</p>
     */
    inline const EntityType& GetEntityType() const{ return m_entityType; }

    /**
     * <p>The type of an entity.</p>
     */
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }

    /**
     * <p>The type of an entity.</p>
     */
    inline void SetEntityType(const EntityType& value) { m_entityTypeHasBeenSet = true; m_entityType = value; }

    /**
     * <p>The type of an entity.</p>
     */
    inline void SetEntityType(EntityType&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::move(value); }

    /**
     * <p>The type of an entity.</p>
     */
    inline CreateListingChangeSetRequest& WithEntityType(const EntityType& value) { SetEntityType(value); return *this;}

    /**
     * <p>The type of an entity.</p>
     */
    inline CreateListingChangeSetRequest& WithEntityType(EntityType&& value) { SetEntityType(std::move(value)); return *this;}

  private:

    ChangeAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_entityIdentifier;
    bool m_entityIdentifierHasBeenSet = false;

    Aws::String m_entityRevision;
    bool m_entityRevisionHasBeenSet = false;

    EntityType m_entityType;
    bool m_entityTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
