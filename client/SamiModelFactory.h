#ifndef ModelFactory_H_
#define ModelFactory_H_

#include "SamiObject.h"

#include "SamiAchievementDefinitionResource.h"
#include "SamiActionResource.h"
#include "SamiActionVariableResource.h"
#include "SamiActivityEntitlementResource.h"
#include "SamiActivityOccurrenceCreationFailure.h"
#include "SamiActivityOccurrenceJoinResult.h"
#include "SamiActivityOccurrenceResource.h"
#include "SamiActivityOccurrenceResults.h"
#include "SamiActivityOccurrenceResultsResource.h"
#include "SamiActivityResource.h"
#include "SamiActivityUserResource.h"
#include "SamiAddressResource.h"
#include "SamiAggregateCountResource.h"
#include "SamiAggregateInvoiceReportResource.h"
#include "SamiAmazonS3Activity.h"
#include "SamiAnswerResource.h"
#include "SamiApplyPaymentRequest.h"
#include "SamiArticleResource.h"
#include "SamiArtistResource.h"
#include "SamiAvailableSettingResource.h"
#include "SamiBareActivityResource.h"
#include "SamiBareChallengeActivityResource.h"
#include "SamiBatch.h"
#include "SamiBatchRequest.h"
#include "SamiBatchResult.h"
#include "SamiBatchReturn.h"
#include "SamiBehavior.h"
#include "SamiBehaviorDefinitionResource.h"
#include "SamiBillingReport.h"
#include "SamiBooleanResource.h"
#include "SamiBreCategoryResource.h"
#include "SamiBreEvent.h"
#include "SamiBreEventLog.h"
#include "SamiBreGlobalResource.h"
#include "SamiBreGlobalScopeDefinition.h"
#include "SamiBreRule.h"
#include "SamiBreRuleLog.h"
#include "SamiBreTriggerParameterDefinition.h"
#include "SamiBreTriggerResource.h"
#include "SamiBroadcastableEvent.h"
#include "SamiBundledSku.h"
#include "SamiCampaignResource.h"
#include "SamiCart.h"
#include "SamiCartItemRequest.h"
#include "SamiCartLineItem.h"
#include "SamiCartShippableResponse.h"
#include "SamiCartShippingAddressRequest.h"
#include "SamiCartShippingOption.h"
#include "SamiCartSummary.h"
#include "SamiCatalogSale.h"
#include "SamiCategoryResource.h"
#include "SamiChallengeActivityResource.h"
#include "SamiChallengeEventParticipantResource.h"
#include "SamiChallengeEventResource.h"
#include "SamiChallengeResource.h"
#include "SamiClientResource.h"
#include "SamiCollection«Country».h"
#include "SamiCollection«string».h"
#include "SamiCommentResource.h"
#include "SamiCommentSearch.h"
#include "SamiConfig.h"
#include "SamiConfigLookupResource.h"
#include "SamiConstantResource.h"
#include "SamiContributionResource.h"
#include "SamiCountry.h"
#include "SamiCountryResource.h"
#include "SamiCountryTaxResource.h"
#include "SamiCouponDefinition.h"
#include "SamiCreateBillingAgreementRequest.h"
#include "SamiCreatePayPalPaymentRequest.h"
#include "SamiCurrencyResource.h"
#include "SamiCustomerConfig.h"
#include "SamiDatabaseConfig.h"
#include "SamiDateOperationResource.h"
#include "SamiDeltaResource.h"
#include "SamiDeviceResource.h"
#include "SamiDiscount.h"
#include "SamiDispositionCount.h"
#include "SamiDispositionResource.h"
#include "SamiDoubleOperationResource.h"
#include "SamiEntitlementGrantRequest.h"
#include "SamiErrorResource.h"
#include "SamiEventContextResource.h"
#include "SamiExpressionResource.h"
#include "SamiExpression«object».h"
#include "SamiFacebookToken.h"
#include "SamiFinalizeBillingAgreementRequest.h"
#include "SamiFinalizePayPalPaymentRequest.h"
#include "SamiFlagReportResource.h"
#include "SamiFlagResource.h"
#include "SamiForwardLog.h"
#include "SamiFulfillmentType.h"
#include "SamiGlobalCheckAndIncrementResource.h"
#include "SamiGlobalResource.h"
#include "SamiGooglePaymentRequest.h"
#include "SamiGoogleToken.h"
#include "SamiGrantTypeResource.h"
#include "SamiGroupMemberResource.h"
#include "SamiGroupResource.h"
#include "SamiIOConfig.h"
#include "SamiImportJobOutputResource.h"
#include "SamiImportJobResource.h"
#include "SamiIntegerOperationResource.h"
#include "SamiInventorySubscriptionResource.h"
#include "SamiInvoiceCreateRequest.h"
#include "SamiInvoiceItemResource.h"
#include "SamiInvoiceLogEntry.h"
#include "SamiInvoicePaymentStatusRequest.h"
#include "SamiInvoiceResource.h"
#include "SamiItem.h"
#include "SamiItemBehaviorDefinitionResource.h"
#include "SamiItemTemplateResource.h"
#include "SamiKeyValuePair«string,string».h"
#include "SamiLeaderboardEntryResource.h"
#include "SamiLeaderboardResource.h"
#include "SamiLevelingResource.h"
#include "SamiLimitedGettableGroup.h"
#include "SamiLocalizer.h"
#include "SamiLocationLogResource.h"
#include "SamiLookupResource.h"
#include "SamiLookupTypeResource.h"
#include "SamiMaintenance.h"
#include "SamiMapResource.h"
#include "SamiMap«string,object».h"
#include "SamiMetricResource.h"
#include "SamiMongoDatabaseConfig.h"
#include "SamiNestedCategory.h"
#include "SamiNewPasswordRequest.h"
#include "SamiOAuth2Resource.h"
#include "SamiOauthAccessTokenResource.h"
#include "SamiOperator.h"
#include "SamiOptimalPaymentRequest.h"
#include "SamiOrder.h"
#include "SamiPageResource«AchievementDefinitionResource».h"
#include "SamiPageResource«AggregateCountResource».h"
#include "SamiPageResource«AggregateInvoiceReportResource».h"
#include "SamiPageResource«ArticleResource».h"
#include "SamiPageResource«ArtistResource».h"
#include "SamiPageResource«BareActivityResource».h"
#include "SamiPageResource«BareChallengeActivityResource».h"
#include "SamiPageResource«BillingReport».h"
#include "SamiPageResource«BreCategoryResource».h"
#include "SamiPageResource«BreEventLog».h"
#include "SamiPageResource«BreGlobalResource».h"
#include "SamiPageResource«BreRule».h"
#include "SamiPageResource«BreTriggerResource».h"
#include "SamiPageResource«CampaignResource».h"
#include "SamiPageResource«CartSummary».h"
#include "SamiPageResource«CatalogSale».h"
#include "SamiPageResource«CategoryResource».h"
#include "SamiPageResource«ChallengeEventParticipantResource».h"
#include "SamiPageResource«ChallengeEventResource».h"
#include "SamiPageResource«ChallengeResource».h"
#include "SamiPageResource«ClientResource».h"
#include "SamiPageResource«CommentResource».h"
#include "SamiPageResource«Config».h"
#include "SamiPageResource«CountryTaxResource».h"
#include "SamiPageResource«CurrencyResource».h"
#include "SamiPageResource«DeviceResource».h"
#include "SamiPageResource«DispositionResource».h"
#include "SamiPageResource«EntitlementItem».h"
#include "SamiPageResource«FlagReportResource».h"
#include "SamiPageResource«ForwardLog».h"
#include "SamiPageResource«FulfillmentType».h"
#include "SamiPageResource«GroupMemberResource».h"
#include "SamiPageResource«GroupResource».h"
#include "SamiPageResource«ImportJobResource».h"
#include "SamiPageResource«InvoiceLogEntry».h"
#include "SamiPageResource«InvoiceResource».h"
#include "SamiPageResource«ItemTemplateResource».h"
#include "SamiPageResource«LevelingResource».h"
#include "SamiPageResource«LocationLogResource».h"
#include "SamiPageResource«Map«string,object»».h"
#include "SamiPageResource«OauthAccessTokenResource».h"
#include "SamiPageResource«PermissionResource».h"
#include "SamiPageResource«PollResource».h"
#include "SamiPageResource«QuestionResource».h"
#include "SamiPageResource«QuestionTemplateResource».h"
#include "SamiPageResource«RevenueCountryReportResource».h"
#include "SamiPageResource«RevenueProductReportResource».h"
#include "SamiPageResource«RewardSetResource».h"
#include "SamiPageResource«RoleResource».h"
#include "SamiPageResource«SavedAddressResource».h"
#include "SamiPageResource«SimpleReferenceResource«object»».h"
#include "SamiPageResource«SimpleUserResource».h"
#include "SamiPageResource«SimpleWallet».h"
#include "SamiPageResource«StateTaxResource».h"
#include "SamiPageResource«StoreItemTemplateResource».h"
#include "SamiPageResource«StoreItem».h"
#include "SamiPageResource«SubscriptionResource».h"
#include "SamiPageResource«SubscriptionTemplateResource».h"
#include "SamiPageResource«TemplateResource».h"
#include "SamiPageResource«TransactionResource».h"
#include "SamiPageResource«UsageInfo».h"
#include "SamiPageResource«UserAchievementGroupResource».h"
#include "SamiPageResource«UserActionLog».h"
#include "SamiPageResource«UserBaseResource».h"
#include "SamiPageResource«UserInventoryResource».h"
#include "SamiPageResource«UserItemLogResource».h"
#include "SamiPageResource«UserLevelingResource».h"
#include "SamiPageResource«UserRelationshipResource».h"
#include "SamiPageResource«VendorResource».h"
#include "SamiPageResource«VideoRelationshipResource».h"
#include "SamiPageResource«VideoResource».h"
#include "SamiPageResource«WalletTotalResponse».h"
#include "SamiPageResource«WalletTransactionResource».h"
#include "SamiPageResource«string».h"
#include "SamiParameterResource.h"
#include "SamiPasswordResetRequest.h"
#include "SamiPayBySavedMethodRequest.h"
#include "SamiPaymentAuthorizationResource.h"
#include "SamiPaymentMethodResource.h"
#include "SamiPaymentMethodTypeResource.h"
#include "SamiPermissionResource.h"
#include "SamiPollAnswerResource.h"
#include "SamiPollResource.h"
#include "SamiPollResponseResource.h"
#include "SamiPredicateOperation.h"
#include "SamiPredicateResource.h"
#include "SamiProperty.h"
#include "SamiPropertyDefinitionResource.h"
#include "SamiPropertyFieldListResource.h"
#include "SamiPropertyFieldResource.h"
#include "SamiQuestionResource.h"
#include "SamiQuestionTemplateResource.h"
#include "SamiRawEmailResource.h"
#include "SamiRawSMSResource.h"
#include "SamiReactivateSubscriptionRequest.h"
#include "SamiRefundRequest.h"
#include "SamiRefundResource.h"
#include "SamiResult.h"
#include "SamiRevenueCountryReportResource.h"
#include "SamiRevenueProductReportResource.h"
#include "SamiRevenueReportResource.h"
#include "SamiRewardCurrencyResource.h"
#include "SamiRewardItemResource.h"
#include "SamiRewardSetResource.h"
#include "SamiRoleResource.h"
#include "SamiS3Config.h"
#include "SamiSampleCountriesResponse.h"
#include "SamiSavedAddressResource.h"
#include "SamiSchedule.h"
#include "SamiSearchReferenceMapping.h"
#include "SamiSelectedSettingResource.h"
#include "SamiSettingOption.h"
#include "SamiSimpleReferenceResource«int».h"
#include "SamiSimpleReferenceResource«long».h"
#include "SamiSimpleReferenceResource«object».h"
#include "SamiSimpleReferenceResource«string».h"
#include "SamiSimpleUserResource.h"
#include "SamiSimpleWallet.h"
#include "SamiSku.h"
#include "SamiSkuRequest.h"
#include "SamiSqlDatabaseConfig.h"
#include "SamiStateResource.h"
#include "SamiStateTaxResource.h"
#include "SamiStoreItemTemplateResource.h"
#include "SamiStringOperationResource.h"
#include "SamiStripeCreatePaymentMethod.h"
#include "SamiStripePaymentRequest.h"
#include "SamiSubscriptionCreditResource.h"
#include "SamiSubscriptionPlan.h"
#include "SamiSubscriptionPlanResource.h"
#include "SamiSubscriptionPriceOverrideRequest.h"
#include "SamiSubscriptionResource.h"
#include "SamiSubscriptionTemplateResource.h"
#include "SamiTemplateEmailResource.h"
#include "SamiTemplateResource.h"
#include "SamiTemplateSMSResource.h"
#include "SamiTierResource.h"
#include "SamiTokenDetailsResource.h"
#include "SamiTransactionResource.h"
#include "SamiTypeHintLookupResource.h"
#include "SamiUsageInfo.h"
#include "SamiUserAchievementGroupResource.h"
#include "SamiUserAchievementResource.h"
#include "SamiUserActionLog.h"
#include "SamiUserActivityResults.h"
#include "SamiUserActivityResultsResource.h"
#include "SamiUserBaseResource.h"
#include "SamiUserInventoryAddRequest.h"
#include "SamiUserInventoryResource.h"
#include "SamiUserItemLogResource.h"
#include "SamiUserLevelingResource.h"
#include "SamiUserRelationshipReferenceResource.h"
#include "SamiUserRelationshipResource.h"
#include "SamiUserResource.h"
#include "SamiUsernameLookupResource.h"
#include "SamiVariableTypeResource.h"
#include "SamiVendorEmailLookupResource.h"
#include "SamiVendorResource.h"
#include "SamiVersion.h"
#include "SamiVideoRelationshipResource.h"
#include "SamiVideoResource.h"
#include "SamiWalletAlterRequest.h"
#include "SamiWalletTotalResponse.h"
#include "SamiWalletTransactionResource.h"
#include "SamiXsollaPaymentRequest.h"
#include "SamiAudioPropertyDefinitionResource.h"
#include "SamiBooleanProperty.h"
#include "SamiBooleanPropertyDefinitionResource.h"
#include "SamiCacheClearEvent.h"
#include "SamiConsumable.h"
#include "SamiDateProperty.h"
#include "SamiDatePropertyDefinitionResource.h"
#include "SamiDoubleProperty.h"
#include "SamiDoublePropertyDefinitionResource.h"
#include "SamiEntitlementItem.h"
#include "SamiExpirable.h"
#include "SamiFileGroupProperty.h"
#include "SamiFileGroupPropertyDefinitionResource.h"
#include "SamiFileProperty.h"
#include "SamiFilePropertyDefinitionResource.h"
#include "SamiFormattedTextProperty.h"
#include "SamiFormattedTextPropertyDefinitionResource.h"
#include "SamiFulfillable.h"
#include "SamiGuestPlayable.h"
#include "SamiImagePropertyDefinitionResource.h"
#include "SamiIntegerProperty.h"
#include "SamiIntegerPropertyDefinitionResource.h"
#include "SamiLimitedGettable.h"
#include "SamiLongProperty.h"
#include "SamiLongPropertyDefinitionResource.h"
#include "SamiNewCustomerEvent.h"
#include "SamiPreReqEntitlement.h"
#include "SamiPriceOverridable.h"
#include "SamiRemoveCustomerEvent.h"
#include "SamiSpendable.h"
#include "SamiStoreItem.h"
#include "SamiTextProperty.h"
#include "SamiTextPropertyDefinitionResource.h"
#include "SamiTimePeriodGettable.h"
#include "SamiTimePeriodUsable.h"
#include "SamiVideoPropertyDefinitionResource.h"
#include "SamiAudioGroupProperty.h"
#include "SamiAudioGroupPropertyDefinitionResource.h"
#include "SamiAudioProperty.h"
#include "SamiBundleItem.h"
#include "SamiCouponItem.h"
#include "SamiImageGroupProperty.h"
#include "SamiImageGroupPropertyDefinitionResource.h"
#include "SamiImageProperty.h"
#include "SamiShippingItem.h"
#include "SamiSubscription.h"
#include "SamiVideoGroupProperty.h"
#include "SamiVideoGroupPropertyDefinitionResource.h"
#include "SamiVideoProperty.h"

namespace Swagger {
  void*
  create(String type) {
    if(type.Equals(L"SamiAchievementDefinitionResource", true)) {
      return new SamiAchievementDefinitionResource();
    }
    if(type.Equals(L"SamiActionResource", true)) {
      return new SamiActionResource();
    }
    if(type.Equals(L"SamiActionVariableResource", true)) {
      return new SamiActionVariableResource();
    }
    if(type.Equals(L"SamiActivityEntitlementResource", true)) {
      return new SamiActivityEntitlementResource();
    }
    if(type.Equals(L"SamiActivityOccurrenceCreationFailure", true)) {
      return new SamiActivityOccurrenceCreationFailure();
    }
    if(type.Equals(L"SamiActivityOccurrenceJoinResult", true)) {
      return new SamiActivityOccurrenceJoinResult();
    }
    if(type.Equals(L"SamiActivityOccurrenceResource", true)) {
      return new SamiActivityOccurrenceResource();
    }
    if(type.Equals(L"SamiActivityOccurrenceResults", true)) {
      return new SamiActivityOccurrenceResults();
    }
    if(type.Equals(L"SamiActivityOccurrenceResultsResource", true)) {
      return new SamiActivityOccurrenceResultsResource();
    }
    if(type.Equals(L"SamiActivityResource", true)) {
      return new SamiActivityResource();
    }
    if(type.Equals(L"SamiActivityUserResource", true)) {
      return new SamiActivityUserResource();
    }
    if(type.Equals(L"SamiAddressResource", true)) {
      return new SamiAddressResource();
    }
    if(type.Equals(L"SamiAggregateCountResource", true)) {
      return new SamiAggregateCountResource();
    }
    if(type.Equals(L"SamiAggregateInvoiceReportResource", true)) {
      return new SamiAggregateInvoiceReportResource();
    }
    if(type.Equals(L"SamiAmazonS3Activity", true)) {
      return new SamiAmazonS3Activity();
    }
    if(type.Equals(L"SamiAnswerResource", true)) {
      return new SamiAnswerResource();
    }
    if(type.Equals(L"SamiApplyPaymentRequest", true)) {
      return new SamiApplyPaymentRequest();
    }
    if(type.Equals(L"SamiArticleResource", true)) {
      return new SamiArticleResource();
    }
    if(type.Equals(L"SamiArtistResource", true)) {
      return new SamiArtistResource();
    }
    if(type.Equals(L"SamiAvailableSettingResource", true)) {
      return new SamiAvailableSettingResource();
    }
    if(type.Equals(L"SamiBareActivityResource", true)) {
      return new SamiBareActivityResource();
    }
    if(type.Equals(L"SamiBareChallengeActivityResource", true)) {
      return new SamiBareChallengeActivityResource();
    }
    if(type.Equals(L"SamiBatch", true)) {
      return new SamiBatch();
    }
    if(type.Equals(L"SamiBatchRequest", true)) {
      return new SamiBatchRequest();
    }
    if(type.Equals(L"SamiBatchResult", true)) {
      return new SamiBatchResult();
    }
    if(type.Equals(L"SamiBatchReturn", true)) {
      return new SamiBatchReturn();
    }
    if(type.Equals(L"SamiBehavior", true)) {
      return new SamiBehavior();
    }
    if(type.Equals(L"SamiBehaviorDefinitionResource", true)) {
      return new SamiBehaviorDefinitionResource();
    }
    if(type.Equals(L"SamiBillingReport", true)) {
      return new SamiBillingReport();
    }
    if(type.Equals(L"SamiBooleanResource", true)) {
      return new SamiBooleanResource();
    }
    if(type.Equals(L"SamiBreCategoryResource", true)) {
      return new SamiBreCategoryResource();
    }
    if(type.Equals(L"SamiBreEvent", true)) {
      return new SamiBreEvent();
    }
    if(type.Equals(L"SamiBreEventLog", true)) {
      return new SamiBreEventLog();
    }
    if(type.Equals(L"SamiBreGlobalResource", true)) {
      return new SamiBreGlobalResource();
    }
    if(type.Equals(L"SamiBreGlobalScopeDefinition", true)) {
      return new SamiBreGlobalScopeDefinition();
    }
    if(type.Equals(L"SamiBreRule", true)) {
      return new SamiBreRule();
    }
    if(type.Equals(L"SamiBreRuleLog", true)) {
      return new SamiBreRuleLog();
    }
    if(type.Equals(L"SamiBreTriggerParameterDefinition", true)) {
      return new SamiBreTriggerParameterDefinition();
    }
    if(type.Equals(L"SamiBreTriggerResource", true)) {
      return new SamiBreTriggerResource();
    }
    if(type.Equals(L"SamiBroadcastableEvent", true)) {
      return new SamiBroadcastableEvent();
    }
    if(type.Equals(L"SamiBundledSku", true)) {
      return new SamiBundledSku();
    }
    if(type.Equals(L"SamiCampaignResource", true)) {
      return new SamiCampaignResource();
    }
    if(type.Equals(L"SamiCart", true)) {
      return new SamiCart();
    }
    if(type.Equals(L"SamiCartItemRequest", true)) {
      return new SamiCartItemRequest();
    }
    if(type.Equals(L"SamiCartLineItem", true)) {
      return new SamiCartLineItem();
    }
    if(type.Equals(L"SamiCartShippableResponse", true)) {
      return new SamiCartShippableResponse();
    }
    if(type.Equals(L"SamiCartShippingAddressRequest", true)) {
      return new SamiCartShippingAddressRequest();
    }
    if(type.Equals(L"SamiCartShippingOption", true)) {
      return new SamiCartShippingOption();
    }
    if(type.Equals(L"SamiCartSummary", true)) {
      return new SamiCartSummary();
    }
    if(type.Equals(L"SamiCatalogSale", true)) {
      return new SamiCatalogSale();
    }
    if(type.Equals(L"SamiCategoryResource", true)) {
      return new SamiCategoryResource();
    }
    if(type.Equals(L"SamiChallengeActivityResource", true)) {
      return new SamiChallengeActivityResource();
    }
    if(type.Equals(L"SamiChallengeEventParticipantResource", true)) {
      return new SamiChallengeEventParticipantResource();
    }
    if(type.Equals(L"SamiChallengeEventResource", true)) {
      return new SamiChallengeEventResource();
    }
    if(type.Equals(L"SamiChallengeResource", true)) {
      return new SamiChallengeResource();
    }
    if(type.Equals(L"SamiClientResource", true)) {
      return new SamiClientResource();
    }
    if(type.Equals(L"SamiCollection«Country»", true)) {
      return new SamiCollection«Country»();
    }
    if(type.Equals(L"SamiCollection«string»", true)) {
      return new SamiCollection«string»();
    }
    if(type.Equals(L"SamiCommentResource", true)) {
      return new SamiCommentResource();
    }
    if(type.Equals(L"SamiCommentSearch", true)) {
      return new SamiCommentSearch();
    }
    if(type.Equals(L"SamiConfig", true)) {
      return new SamiConfig();
    }
    if(type.Equals(L"SamiConfigLookupResource", true)) {
      return new SamiConfigLookupResource();
    }
    if(type.Equals(L"SamiConstantResource", true)) {
      return new SamiConstantResource();
    }
    if(type.Equals(L"SamiContributionResource", true)) {
      return new SamiContributionResource();
    }
    if(type.Equals(L"SamiCountry", true)) {
      return new SamiCountry();
    }
    if(type.Equals(L"SamiCountryResource", true)) {
      return new SamiCountryResource();
    }
    if(type.Equals(L"SamiCountryTaxResource", true)) {
      return new SamiCountryTaxResource();
    }
    if(type.Equals(L"SamiCouponDefinition", true)) {
      return new SamiCouponDefinition();
    }
    if(type.Equals(L"SamiCreateBillingAgreementRequest", true)) {
      return new SamiCreateBillingAgreementRequest();
    }
    if(type.Equals(L"SamiCreatePayPalPaymentRequest", true)) {
      return new SamiCreatePayPalPaymentRequest();
    }
    if(type.Equals(L"SamiCurrencyResource", true)) {
      return new SamiCurrencyResource();
    }
    if(type.Equals(L"SamiCustomerConfig", true)) {
      return new SamiCustomerConfig();
    }
    if(type.Equals(L"SamiDatabaseConfig", true)) {
      return new SamiDatabaseConfig();
    }
    if(type.Equals(L"SamiDateOperationResource", true)) {
      return new SamiDateOperationResource();
    }
    if(type.Equals(L"SamiDeltaResource", true)) {
      return new SamiDeltaResource();
    }
    if(type.Equals(L"SamiDeviceResource", true)) {
      return new SamiDeviceResource();
    }
    if(type.Equals(L"SamiDiscount", true)) {
      return new SamiDiscount();
    }
    if(type.Equals(L"SamiDispositionCount", true)) {
      return new SamiDispositionCount();
    }
    if(type.Equals(L"SamiDispositionResource", true)) {
      return new SamiDispositionResource();
    }
    if(type.Equals(L"SamiDoubleOperationResource", true)) {
      return new SamiDoubleOperationResource();
    }
    if(type.Equals(L"SamiEntitlementGrantRequest", true)) {
      return new SamiEntitlementGrantRequest();
    }
    if(type.Equals(L"SamiErrorResource", true)) {
      return new SamiErrorResource();
    }
    if(type.Equals(L"SamiEventContextResource", true)) {
      return new SamiEventContextResource();
    }
    if(type.Equals(L"SamiExpressionResource", true)) {
      return new SamiExpressionResource();
    }
    if(type.Equals(L"SamiExpression«object»", true)) {
      return new SamiExpression«object»();
    }
    if(type.Equals(L"SamiFacebookToken", true)) {
      return new SamiFacebookToken();
    }
    if(type.Equals(L"SamiFinalizeBillingAgreementRequest", true)) {
      return new SamiFinalizeBillingAgreementRequest();
    }
    if(type.Equals(L"SamiFinalizePayPalPaymentRequest", true)) {
      return new SamiFinalizePayPalPaymentRequest();
    }
    if(type.Equals(L"SamiFlagReportResource", true)) {
      return new SamiFlagReportResource();
    }
    if(type.Equals(L"SamiFlagResource", true)) {
      return new SamiFlagResource();
    }
    if(type.Equals(L"SamiForwardLog", true)) {
      return new SamiForwardLog();
    }
    if(type.Equals(L"SamiFulfillmentType", true)) {
      return new SamiFulfillmentType();
    }
    if(type.Equals(L"SamiGlobalCheckAndIncrementResource", true)) {
      return new SamiGlobalCheckAndIncrementResource();
    }
    if(type.Equals(L"SamiGlobalResource", true)) {
      return new SamiGlobalResource();
    }
    if(type.Equals(L"SamiGooglePaymentRequest", true)) {
      return new SamiGooglePaymentRequest();
    }
    if(type.Equals(L"SamiGoogleToken", true)) {
      return new SamiGoogleToken();
    }
    if(type.Equals(L"SamiGrantTypeResource", true)) {
      return new SamiGrantTypeResource();
    }
    if(type.Equals(L"SamiGroupMemberResource", true)) {
      return new SamiGroupMemberResource();
    }
    if(type.Equals(L"SamiGroupResource", true)) {
      return new SamiGroupResource();
    }
    if(type.Equals(L"SamiIOConfig", true)) {
      return new SamiIOConfig();
    }
    if(type.Equals(L"SamiImportJobOutputResource", true)) {
      return new SamiImportJobOutputResource();
    }
    if(type.Equals(L"SamiImportJobResource", true)) {
      return new SamiImportJobResource();
    }
    if(type.Equals(L"SamiIntegerOperationResource", true)) {
      return new SamiIntegerOperationResource();
    }
    if(type.Equals(L"SamiInventorySubscriptionResource", true)) {
      return new SamiInventorySubscriptionResource();
    }
    if(type.Equals(L"SamiInvoiceCreateRequest", true)) {
      return new SamiInvoiceCreateRequest();
    }
    if(type.Equals(L"SamiInvoiceItemResource", true)) {
      return new SamiInvoiceItemResource();
    }
    if(type.Equals(L"SamiInvoiceLogEntry", true)) {
      return new SamiInvoiceLogEntry();
    }
    if(type.Equals(L"SamiInvoicePaymentStatusRequest", true)) {
      return new SamiInvoicePaymentStatusRequest();
    }
    if(type.Equals(L"SamiInvoiceResource", true)) {
      return new SamiInvoiceResource();
    }
    if(type.Equals(L"SamiItem", true)) {
      return new SamiItem();
    }
    if(type.Equals(L"SamiItemBehaviorDefinitionResource", true)) {
      return new SamiItemBehaviorDefinitionResource();
    }
    if(type.Equals(L"SamiItemTemplateResource", true)) {
      return new SamiItemTemplateResource();
    }
    if(type.Equals(L"SamiKeyValuePair«string,string»", true)) {
      return new SamiKeyValuePair«string,string»();
    }
    if(type.Equals(L"SamiLeaderboardEntryResource", true)) {
      return new SamiLeaderboardEntryResource();
    }
    if(type.Equals(L"SamiLeaderboardResource", true)) {
      return new SamiLeaderboardResource();
    }
    if(type.Equals(L"SamiLevelingResource", true)) {
      return new SamiLevelingResource();
    }
    if(type.Equals(L"SamiLimitedGettableGroup", true)) {
      return new SamiLimitedGettableGroup();
    }
    if(type.Equals(L"SamiLocalizer", true)) {
      return new SamiLocalizer();
    }
    if(type.Equals(L"SamiLocationLogResource", true)) {
      return new SamiLocationLogResource();
    }
    if(type.Equals(L"SamiLookupResource", true)) {
      return new SamiLookupResource();
    }
    if(type.Equals(L"SamiLookupTypeResource", true)) {
      return new SamiLookupTypeResource();
    }
    if(type.Equals(L"SamiMaintenance", true)) {
      return new SamiMaintenance();
    }
    if(type.Equals(L"SamiMapResource", true)) {
      return new SamiMapResource();
    }
    if(type.Equals(L"SamiMap«string,object»", true)) {
      return new SamiMap«string,object»();
    }
    if(type.Equals(L"SamiMetricResource", true)) {
      return new SamiMetricResource();
    }
    if(type.Equals(L"SamiMongoDatabaseConfig", true)) {
      return new SamiMongoDatabaseConfig();
    }
    if(type.Equals(L"SamiNestedCategory", true)) {
      return new SamiNestedCategory();
    }
    if(type.Equals(L"SamiNewPasswordRequest", true)) {
      return new SamiNewPasswordRequest();
    }
    if(type.Equals(L"SamiOAuth2Resource", true)) {
      return new SamiOAuth2Resource();
    }
    if(type.Equals(L"SamiOauthAccessTokenResource", true)) {
      return new SamiOauthAccessTokenResource();
    }
    if(type.Equals(L"SamiOperator", true)) {
      return new SamiOperator();
    }
    if(type.Equals(L"SamiOptimalPaymentRequest", true)) {
      return new SamiOptimalPaymentRequest();
    }
    if(type.Equals(L"SamiOrder", true)) {
      return new SamiOrder();
    }
    if(type.Equals(L"SamiPageResource«AchievementDefinitionResource»", true)) {
      return new SamiPageResource«AchievementDefinitionResource»();
    }
    if(type.Equals(L"SamiPageResource«AggregateCountResource»", true)) {
      return new SamiPageResource«AggregateCountResource»();
    }
    if(type.Equals(L"SamiPageResource«AggregateInvoiceReportResource»", true)) {
      return new SamiPageResource«AggregateInvoiceReportResource»();
    }
    if(type.Equals(L"SamiPageResource«ArticleResource»", true)) {
      return new SamiPageResource«ArticleResource»();
    }
    if(type.Equals(L"SamiPageResource«ArtistResource»", true)) {
      return new SamiPageResource«ArtistResource»();
    }
    if(type.Equals(L"SamiPageResource«BareActivityResource»", true)) {
      return new SamiPageResource«BareActivityResource»();
    }
    if(type.Equals(L"SamiPageResource«BareChallengeActivityResource»", true)) {
      return new SamiPageResource«BareChallengeActivityResource»();
    }
    if(type.Equals(L"SamiPageResource«BillingReport»", true)) {
      return new SamiPageResource«BillingReport»();
    }
    if(type.Equals(L"SamiPageResource«BreCategoryResource»", true)) {
      return new SamiPageResource«BreCategoryResource»();
    }
    if(type.Equals(L"SamiPageResource«BreEventLog»", true)) {
      return new SamiPageResource«BreEventLog»();
    }
    if(type.Equals(L"SamiPageResource«BreGlobalResource»", true)) {
      return new SamiPageResource«BreGlobalResource»();
    }
    if(type.Equals(L"SamiPageResource«BreRule»", true)) {
      return new SamiPageResource«BreRule»();
    }
    if(type.Equals(L"SamiPageResource«BreTriggerResource»", true)) {
      return new SamiPageResource«BreTriggerResource»();
    }
    if(type.Equals(L"SamiPageResource«CampaignResource»", true)) {
      return new SamiPageResource«CampaignResource»();
    }
    if(type.Equals(L"SamiPageResource«CartSummary»", true)) {
      return new SamiPageResource«CartSummary»();
    }
    if(type.Equals(L"SamiPageResource«CatalogSale»", true)) {
      return new SamiPageResource«CatalogSale»();
    }
    if(type.Equals(L"SamiPageResource«CategoryResource»", true)) {
      return new SamiPageResource«CategoryResource»();
    }
    if(type.Equals(L"SamiPageResource«ChallengeEventParticipantResource»", true)) {
      return new SamiPageResource«ChallengeEventParticipantResource»();
    }
    if(type.Equals(L"SamiPageResource«ChallengeEventResource»", true)) {
      return new SamiPageResource«ChallengeEventResource»();
    }
    if(type.Equals(L"SamiPageResource«ChallengeResource»", true)) {
      return new SamiPageResource«ChallengeResource»();
    }
    if(type.Equals(L"SamiPageResource«ClientResource»", true)) {
      return new SamiPageResource«ClientResource»();
    }
    if(type.Equals(L"SamiPageResource«CommentResource»", true)) {
      return new SamiPageResource«CommentResource»();
    }
    if(type.Equals(L"SamiPageResource«Config»", true)) {
      return new SamiPageResource«Config»();
    }
    if(type.Equals(L"SamiPageResource«CountryTaxResource»", true)) {
      return new SamiPageResource«CountryTaxResource»();
    }
    if(type.Equals(L"SamiPageResource«CurrencyResource»", true)) {
      return new SamiPageResource«CurrencyResource»();
    }
    if(type.Equals(L"SamiPageResource«DeviceResource»", true)) {
      return new SamiPageResource«DeviceResource»();
    }
    if(type.Equals(L"SamiPageResource«DispositionResource»", true)) {
      return new SamiPageResource«DispositionResource»();
    }
    if(type.Equals(L"SamiPageResource«EntitlementItem»", true)) {
      return new SamiPageResource«EntitlementItem»();
    }
    if(type.Equals(L"SamiPageResource«FlagReportResource»", true)) {
      return new SamiPageResource«FlagReportResource»();
    }
    if(type.Equals(L"SamiPageResource«ForwardLog»", true)) {
      return new SamiPageResource«ForwardLog»();
    }
    if(type.Equals(L"SamiPageResource«FulfillmentType»", true)) {
      return new SamiPageResource«FulfillmentType»();
    }
    if(type.Equals(L"SamiPageResource«GroupMemberResource»", true)) {
      return new SamiPageResource«GroupMemberResource»();
    }
    if(type.Equals(L"SamiPageResource«GroupResource»", true)) {
      return new SamiPageResource«GroupResource»();
    }
    if(type.Equals(L"SamiPageResource«ImportJobResource»", true)) {
      return new SamiPageResource«ImportJobResource»();
    }
    if(type.Equals(L"SamiPageResource«InvoiceLogEntry»", true)) {
      return new SamiPageResource«InvoiceLogEntry»();
    }
    if(type.Equals(L"SamiPageResource«InvoiceResource»", true)) {
      return new SamiPageResource«InvoiceResource»();
    }
    if(type.Equals(L"SamiPageResource«ItemTemplateResource»", true)) {
      return new SamiPageResource«ItemTemplateResource»();
    }
    if(type.Equals(L"SamiPageResource«LevelingResource»", true)) {
      return new SamiPageResource«LevelingResource»();
    }
    if(type.Equals(L"SamiPageResource«LocationLogResource»", true)) {
      return new SamiPageResource«LocationLogResource»();
    }
    if(type.Equals(L"SamiPageResource«Map«string,object»»", true)) {
      return new SamiPageResource«Map«string,object»»();
    }
    if(type.Equals(L"SamiPageResource«OauthAccessTokenResource»", true)) {
      return new SamiPageResource«OauthAccessTokenResource»();
    }
    if(type.Equals(L"SamiPageResource«PermissionResource»", true)) {
      return new SamiPageResource«PermissionResource»();
    }
    if(type.Equals(L"SamiPageResource«PollResource»", true)) {
      return new SamiPageResource«PollResource»();
    }
    if(type.Equals(L"SamiPageResource«QuestionResource»", true)) {
      return new SamiPageResource«QuestionResource»();
    }
    if(type.Equals(L"SamiPageResource«QuestionTemplateResource»", true)) {
      return new SamiPageResource«QuestionTemplateResource»();
    }
    if(type.Equals(L"SamiPageResource«RevenueCountryReportResource»", true)) {
      return new SamiPageResource«RevenueCountryReportResource»();
    }
    if(type.Equals(L"SamiPageResource«RevenueProductReportResource»", true)) {
      return new SamiPageResource«RevenueProductReportResource»();
    }
    if(type.Equals(L"SamiPageResource«RewardSetResource»", true)) {
      return new SamiPageResource«RewardSetResource»();
    }
    if(type.Equals(L"SamiPageResource«RoleResource»", true)) {
      return new SamiPageResource«RoleResource»();
    }
    if(type.Equals(L"SamiPageResource«SavedAddressResource»", true)) {
      return new SamiPageResource«SavedAddressResource»();
    }
    if(type.Equals(L"SamiPageResource«SimpleReferenceResource«object»»", true)) {
      return new SamiPageResource«SimpleReferenceResource«object»»();
    }
    if(type.Equals(L"SamiPageResource«SimpleUserResource»", true)) {
      return new SamiPageResource«SimpleUserResource»();
    }
    if(type.Equals(L"SamiPageResource«SimpleWallet»", true)) {
      return new SamiPageResource«SimpleWallet»();
    }
    if(type.Equals(L"SamiPageResource«StateTaxResource»", true)) {
      return new SamiPageResource«StateTaxResource»();
    }
    if(type.Equals(L"SamiPageResource«StoreItemTemplateResource»", true)) {
      return new SamiPageResource«StoreItemTemplateResource»();
    }
    if(type.Equals(L"SamiPageResource«StoreItem»", true)) {
      return new SamiPageResource«StoreItem»();
    }
    if(type.Equals(L"SamiPageResource«SubscriptionResource»", true)) {
      return new SamiPageResource«SubscriptionResource»();
    }
    if(type.Equals(L"SamiPageResource«SubscriptionTemplateResource»", true)) {
      return new SamiPageResource«SubscriptionTemplateResource»();
    }
    if(type.Equals(L"SamiPageResource«TemplateResource»", true)) {
      return new SamiPageResource«TemplateResource»();
    }
    if(type.Equals(L"SamiPageResource«TransactionResource»", true)) {
      return new SamiPageResource«TransactionResource»();
    }
    if(type.Equals(L"SamiPageResource«UsageInfo»", true)) {
      return new SamiPageResource«UsageInfo»();
    }
    if(type.Equals(L"SamiPageResource«UserAchievementGroupResource»", true)) {
      return new SamiPageResource«UserAchievementGroupResource»();
    }
    if(type.Equals(L"SamiPageResource«UserActionLog»", true)) {
      return new SamiPageResource«UserActionLog»();
    }
    if(type.Equals(L"SamiPageResource«UserBaseResource»", true)) {
      return new SamiPageResource«UserBaseResource»();
    }
    if(type.Equals(L"SamiPageResource«UserInventoryResource»", true)) {
      return new SamiPageResource«UserInventoryResource»();
    }
    if(type.Equals(L"SamiPageResource«UserItemLogResource»", true)) {
      return new SamiPageResource«UserItemLogResource»();
    }
    if(type.Equals(L"SamiPageResource«UserLevelingResource»", true)) {
      return new SamiPageResource«UserLevelingResource»();
    }
    if(type.Equals(L"SamiPageResource«UserRelationshipResource»", true)) {
      return new SamiPageResource«UserRelationshipResource»();
    }
    if(type.Equals(L"SamiPageResource«VendorResource»", true)) {
      return new SamiPageResource«VendorResource»();
    }
    if(type.Equals(L"SamiPageResource«VideoRelationshipResource»", true)) {
      return new SamiPageResource«VideoRelationshipResource»();
    }
    if(type.Equals(L"SamiPageResource«VideoResource»", true)) {
      return new SamiPageResource«VideoResource»();
    }
    if(type.Equals(L"SamiPageResource«WalletTotalResponse»", true)) {
      return new SamiPageResource«WalletTotalResponse»();
    }
    if(type.Equals(L"SamiPageResource«WalletTransactionResource»", true)) {
      return new SamiPageResource«WalletTransactionResource»();
    }
    if(type.Equals(L"SamiPageResource«string»", true)) {
      return new SamiPageResource«string»();
    }
    if(type.Equals(L"SamiParameterResource", true)) {
      return new SamiParameterResource();
    }
    if(type.Equals(L"SamiPasswordResetRequest", true)) {
      return new SamiPasswordResetRequest();
    }
    if(type.Equals(L"SamiPayBySavedMethodRequest", true)) {
      return new SamiPayBySavedMethodRequest();
    }
    if(type.Equals(L"SamiPaymentAuthorizationResource", true)) {
      return new SamiPaymentAuthorizationResource();
    }
    if(type.Equals(L"SamiPaymentMethodResource", true)) {
      return new SamiPaymentMethodResource();
    }
    if(type.Equals(L"SamiPaymentMethodTypeResource", true)) {
      return new SamiPaymentMethodTypeResource();
    }
    if(type.Equals(L"SamiPermissionResource", true)) {
      return new SamiPermissionResource();
    }
    if(type.Equals(L"SamiPollAnswerResource", true)) {
      return new SamiPollAnswerResource();
    }
    if(type.Equals(L"SamiPollResource", true)) {
      return new SamiPollResource();
    }
    if(type.Equals(L"SamiPollResponseResource", true)) {
      return new SamiPollResponseResource();
    }
    if(type.Equals(L"SamiPredicateOperation", true)) {
      return new SamiPredicateOperation();
    }
    if(type.Equals(L"SamiPredicateResource", true)) {
      return new SamiPredicateResource();
    }
    if(type.Equals(L"SamiProperty", true)) {
      return new SamiProperty();
    }
    if(type.Equals(L"SamiPropertyDefinitionResource", true)) {
      return new SamiPropertyDefinitionResource();
    }
    if(type.Equals(L"SamiPropertyFieldListResource", true)) {
      return new SamiPropertyFieldListResource();
    }
    if(type.Equals(L"SamiPropertyFieldResource", true)) {
      return new SamiPropertyFieldResource();
    }
    if(type.Equals(L"SamiQuestionResource", true)) {
      return new SamiQuestionResource();
    }
    if(type.Equals(L"SamiQuestionTemplateResource", true)) {
      return new SamiQuestionTemplateResource();
    }
    if(type.Equals(L"SamiRawEmailResource", true)) {
      return new SamiRawEmailResource();
    }
    if(type.Equals(L"SamiRawSMSResource", true)) {
      return new SamiRawSMSResource();
    }
    if(type.Equals(L"SamiReactivateSubscriptionRequest", true)) {
      return new SamiReactivateSubscriptionRequest();
    }
    if(type.Equals(L"SamiRefundRequest", true)) {
      return new SamiRefundRequest();
    }
    if(type.Equals(L"SamiRefundResource", true)) {
      return new SamiRefundResource();
    }
    if(type.Equals(L"SamiResult", true)) {
      return new SamiResult();
    }
    if(type.Equals(L"SamiRevenueCountryReportResource", true)) {
      return new SamiRevenueCountryReportResource();
    }
    if(type.Equals(L"SamiRevenueProductReportResource", true)) {
      return new SamiRevenueProductReportResource();
    }
    if(type.Equals(L"SamiRevenueReportResource", true)) {
      return new SamiRevenueReportResource();
    }
    if(type.Equals(L"SamiRewardCurrencyResource", true)) {
      return new SamiRewardCurrencyResource();
    }
    if(type.Equals(L"SamiRewardItemResource", true)) {
      return new SamiRewardItemResource();
    }
    if(type.Equals(L"SamiRewardSetResource", true)) {
      return new SamiRewardSetResource();
    }
    if(type.Equals(L"SamiRoleResource", true)) {
      return new SamiRoleResource();
    }
    if(type.Equals(L"SamiS3Config", true)) {
      return new SamiS3Config();
    }
    if(type.Equals(L"SamiSampleCountriesResponse", true)) {
      return new SamiSampleCountriesResponse();
    }
    if(type.Equals(L"SamiSavedAddressResource", true)) {
      return new SamiSavedAddressResource();
    }
    if(type.Equals(L"SamiSchedule", true)) {
      return new SamiSchedule();
    }
    if(type.Equals(L"SamiSearchReferenceMapping", true)) {
      return new SamiSearchReferenceMapping();
    }
    if(type.Equals(L"SamiSelectedSettingResource", true)) {
      return new SamiSelectedSettingResource();
    }
    if(type.Equals(L"SamiSettingOption", true)) {
      return new SamiSettingOption();
    }
    if(type.Equals(L"SamiSimpleReferenceResource«int»", true)) {
      return new SamiSimpleReferenceResource«int»();
    }
    if(type.Equals(L"SamiSimpleReferenceResource«long»", true)) {
      return new SamiSimpleReferenceResource«long»();
    }
    if(type.Equals(L"SamiSimpleReferenceResource«object»", true)) {
      return new SamiSimpleReferenceResource«object»();
    }
    if(type.Equals(L"SamiSimpleReferenceResource«string»", true)) {
      return new SamiSimpleReferenceResource«string»();
    }
    if(type.Equals(L"SamiSimpleUserResource", true)) {
      return new SamiSimpleUserResource();
    }
    if(type.Equals(L"SamiSimpleWallet", true)) {
      return new SamiSimpleWallet();
    }
    if(type.Equals(L"SamiSku", true)) {
      return new SamiSku();
    }
    if(type.Equals(L"SamiSkuRequest", true)) {
      return new SamiSkuRequest();
    }
    if(type.Equals(L"SamiSqlDatabaseConfig", true)) {
      return new SamiSqlDatabaseConfig();
    }
    if(type.Equals(L"SamiStateResource", true)) {
      return new SamiStateResource();
    }
    if(type.Equals(L"SamiStateTaxResource", true)) {
      return new SamiStateTaxResource();
    }
    if(type.Equals(L"SamiStoreItemTemplateResource", true)) {
      return new SamiStoreItemTemplateResource();
    }
    if(type.Equals(L"SamiStringOperationResource", true)) {
      return new SamiStringOperationResource();
    }
    if(type.Equals(L"SamiStripeCreatePaymentMethod", true)) {
      return new SamiStripeCreatePaymentMethod();
    }
    if(type.Equals(L"SamiStripePaymentRequest", true)) {
      return new SamiStripePaymentRequest();
    }
    if(type.Equals(L"SamiSubscriptionCreditResource", true)) {
      return new SamiSubscriptionCreditResource();
    }
    if(type.Equals(L"SamiSubscriptionPlan", true)) {
      return new SamiSubscriptionPlan();
    }
    if(type.Equals(L"SamiSubscriptionPlanResource", true)) {
      return new SamiSubscriptionPlanResource();
    }
    if(type.Equals(L"SamiSubscriptionPriceOverrideRequest", true)) {
      return new SamiSubscriptionPriceOverrideRequest();
    }
    if(type.Equals(L"SamiSubscriptionResource", true)) {
      return new SamiSubscriptionResource();
    }
    if(type.Equals(L"SamiSubscriptionTemplateResource", true)) {
      return new SamiSubscriptionTemplateResource();
    }
    if(type.Equals(L"SamiTemplateEmailResource", true)) {
      return new SamiTemplateEmailResource();
    }
    if(type.Equals(L"SamiTemplateResource", true)) {
      return new SamiTemplateResource();
    }
    if(type.Equals(L"SamiTemplateSMSResource", true)) {
      return new SamiTemplateSMSResource();
    }
    if(type.Equals(L"SamiTierResource", true)) {
      return new SamiTierResource();
    }
    if(type.Equals(L"SamiTokenDetailsResource", true)) {
      return new SamiTokenDetailsResource();
    }
    if(type.Equals(L"SamiTransactionResource", true)) {
      return new SamiTransactionResource();
    }
    if(type.Equals(L"SamiTypeHintLookupResource", true)) {
      return new SamiTypeHintLookupResource();
    }
    if(type.Equals(L"SamiUsageInfo", true)) {
      return new SamiUsageInfo();
    }
    if(type.Equals(L"SamiUserAchievementGroupResource", true)) {
      return new SamiUserAchievementGroupResource();
    }
    if(type.Equals(L"SamiUserAchievementResource", true)) {
      return new SamiUserAchievementResource();
    }
    if(type.Equals(L"SamiUserActionLog", true)) {
      return new SamiUserActionLog();
    }
    if(type.Equals(L"SamiUserActivityResults", true)) {
      return new SamiUserActivityResults();
    }
    if(type.Equals(L"SamiUserActivityResultsResource", true)) {
      return new SamiUserActivityResultsResource();
    }
    if(type.Equals(L"SamiUserBaseResource", true)) {
      return new SamiUserBaseResource();
    }
    if(type.Equals(L"SamiUserInventoryAddRequest", true)) {
      return new SamiUserInventoryAddRequest();
    }
    if(type.Equals(L"SamiUserInventoryResource", true)) {
      return new SamiUserInventoryResource();
    }
    if(type.Equals(L"SamiUserItemLogResource", true)) {
      return new SamiUserItemLogResource();
    }
    if(type.Equals(L"SamiUserLevelingResource", true)) {
      return new SamiUserLevelingResource();
    }
    if(type.Equals(L"SamiUserRelationshipReferenceResource", true)) {
      return new SamiUserRelationshipReferenceResource();
    }
    if(type.Equals(L"SamiUserRelationshipResource", true)) {
      return new SamiUserRelationshipResource();
    }
    if(type.Equals(L"SamiUserResource", true)) {
      return new SamiUserResource();
    }
    if(type.Equals(L"SamiUsernameLookupResource", true)) {
      return new SamiUsernameLookupResource();
    }
    if(type.Equals(L"SamiVariableTypeResource", true)) {
      return new SamiVariableTypeResource();
    }
    if(type.Equals(L"SamiVendorEmailLookupResource", true)) {
      return new SamiVendorEmailLookupResource();
    }
    if(type.Equals(L"SamiVendorResource", true)) {
      return new SamiVendorResource();
    }
    if(type.Equals(L"SamiVersion", true)) {
      return new SamiVersion();
    }
    if(type.Equals(L"SamiVideoRelationshipResource", true)) {
      return new SamiVideoRelationshipResource();
    }
    if(type.Equals(L"SamiVideoResource", true)) {
      return new SamiVideoResource();
    }
    if(type.Equals(L"SamiWalletAlterRequest", true)) {
      return new SamiWalletAlterRequest();
    }
    if(type.Equals(L"SamiWalletTotalResponse", true)) {
      return new SamiWalletTotalResponse();
    }
    if(type.Equals(L"SamiWalletTransactionResource", true)) {
      return new SamiWalletTransactionResource();
    }
    if(type.Equals(L"SamiXsollaPaymentRequest", true)) {
      return new SamiXsollaPaymentRequest();
    }
    if(type.Equals(L"SamiAudioPropertyDefinitionResource", true)) {
      return new SamiAudioPropertyDefinitionResource();
    }
    if(type.Equals(L"SamiBooleanProperty", true)) {
      return new SamiBooleanProperty();
    }
    if(type.Equals(L"SamiBooleanPropertyDefinitionResource", true)) {
      return new SamiBooleanPropertyDefinitionResource();
    }
    if(type.Equals(L"SamiCacheClearEvent", true)) {
      return new SamiCacheClearEvent();
    }
    if(type.Equals(L"SamiConsumable", true)) {
      return new SamiConsumable();
    }
    if(type.Equals(L"SamiDateProperty", true)) {
      return new SamiDateProperty();
    }
    if(type.Equals(L"SamiDatePropertyDefinitionResource", true)) {
      return new SamiDatePropertyDefinitionResource();
    }
    if(type.Equals(L"SamiDoubleProperty", true)) {
      return new SamiDoubleProperty();
    }
    if(type.Equals(L"SamiDoublePropertyDefinitionResource", true)) {
      return new SamiDoublePropertyDefinitionResource();
    }
    if(type.Equals(L"SamiEntitlementItem", true)) {
      return new SamiEntitlementItem();
    }
    if(type.Equals(L"SamiExpirable", true)) {
      return new SamiExpirable();
    }
    if(type.Equals(L"SamiFileGroupProperty", true)) {
      return new SamiFileGroupProperty();
    }
    if(type.Equals(L"SamiFileGroupPropertyDefinitionResource", true)) {
      return new SamiFileGroupPropertyDefinitionResource();
    }
    if(type.Equals(L"SamiFileProperty", true)) {
      return new SamiFileProperty();
    }
    if(type.Equals(L"SamiFilePropertyDefinitionResource", true)) {
      return new SamiFilePropertyDefinitionResource();
    }
    if(type.Equals(L"SamiFormattedTextProperty", true)) {
      return new SamiFormattedTextProperty();
    }
    if(type.Equals(L"SamiFormattedTextPropertyDefinitionResource", true)) {
      return new SamiFormattedTextPropertyDefinitionResource();
    }
    if(type.Equals(L"SamiFulfillable", true)) {
      return new SamiFulfillable();
    }
    if(type.Equals(L"SamiGuestPlayable", true)) {
      return new SamiGuestPlayable();
    }
    if(type.Equals(L"SamiImagePropertyDefinitionResource", true)) {
      return new SamiImagePropertyDefinitionResource();
    }
    if(type.Equals(L"SamiIntegerProperty", true)) {
      return new SamiIntegerProperty();
    }
    if(type.Equals(L"SamiIntegerPropertyDefinitionResource", true)) {
      return new SamiIntegerPropertyDefinitionResource();
    }
    if(type.Equals(L"SamiLimitedGettable", true)) {
      return new SamiLimitedGettable();
    }
    if(type.Equals(L"SamiLongProperty", true)) {
      return new SamiLongProperty();
    }
    if(type.Equals(L"SamiLongPropertyDefinitionResource", true)) {
      return new SamiLongPropertyDefinitionResource();
    }
    if(type.Equals(L"SamiNewCustomerEvent", true)) {
      return new SamiNewCustomerEvent();
    }
    if(type.Equals(L"SamiPreReqEntitlement", true)) {
      return new SamiPreReqEntitlement();
    }
    if(type.Equals(L"SamiPriceOverridable", true)) {
      return new SamiPriceOverridable();
    }
    if(type.Equals(L"SamiRemoveCustomerEvent", true)) {
      return new SamiRemoveCustomerEvent();
    }
    if(type.Equals(L"SamiSpendable", true)) {
      return new SamiSpendable();
    }
    if(type.Equals(L"SamiStoreItem", true)) {
      return new SamiStoreItem();
    }
    if(type.Equals(L"SamiTextProperty", true)) {
      return new SamiTextProperty();
    }
    if(type.Equals(L"SamiTextPropertyDefinitionResource", true)) {
      return new SamiTextPropertyDefinitionResource();
    }
    if(type.Equals(L"SamiTimePeriodGettable", true)) {
      return new SamiTimePeriodGettable();
    }
    if(type.Equals(L"SamiTimePeriodUsable", true)) {
      return new SamiTimePeriodUsable();
    }
    if(type.Equals(L"SamiVideoPropertyDefinitionResource", true)) {
      return new SamiVideoPropertyDefinitionResource();
    }
    if(type.Equals(L"SamiAudioGroupProperty", true)) {
      return new SamiAudioGroupProperty();
    }
    if(type.Equals(L"SamiAudioGroupPropertyDefinitionResource", true)) {
      return new SamiAudioGroupPropertyDefinitionResource();
    }
    if(type.Equals(L"SamiAudioProperty", true)) {
      return new SamiAudioProperty();
    }
    if(type.Equals(L"SamiBundleItem", true)) {
      return new SamiBundleItem();
    }
    if(type.Equals(L"SamiCouponItem", true)) {
      return new SamiCouponItem();
    }
    if(type.Equals(L"SamiImageGroupProperty", true)) {
      return new SamiImageGroupProperty();
    }
    if(type.Equals(L"SamiImageGroupPropertyDefinitionResource", true)) {
      return new SamiImageGroupPropertyDefinitionResource();
    }
    if(type.Equals(L"SamiImageProperty", true)) {
      return new SamiImageProperty();
    }
    if(type.Equals(L"SamiShippingItem", true)) {
      return new SamiShippingItem();
    }
    if(type.Equals(L"SamiSubscription", true)) {
      return new SamiSubscription();
    }
    if(type.Equals(L"SamiVideoGroupProperty", true)) {
      return new SamiVideoGroupProperty();
    }
    if(type.Equals(L"SamiVideoGroupPropertyDefinitionResource", true)) {
      return new SamiVideoGroupPropertyDefinitionResource();
    }
    if(type.Equals(L"SamiVideoProperty", true)) {
      return new SamiVideoProperty();
    }
    
    if(type.Equals(L"String", true)) {
      return new String();
    }
    if(type.Equals(L"Integer", true)) {
      return new Integer();
    }
    if(type.Equals(L"Long", true)) {
      return new Long();
    }
    if(type.Equals(L"DateTime", true)) {
      return new DateTime();
    }
    return null;
  }
} /* namespace Swagger */

#endif /* ModelFactory_H_ */
