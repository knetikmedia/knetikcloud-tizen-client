#ifndef ModelFactory_H_
#define ModelFactory_H_

#include "SamiObject.h"

#include "SamiAchievementDefinitionResource.h"
#include "SamiAchievementProgressUpdateRequest.h"
#include "SamiActionResource.h"
#include "SamiActionVariableResource.h"
#include "SamiActivityEntitlementResource.h"
#include "SamiActivityOccurrenceCreationFailure.h"
#include "SamiActivityOccurrenceJoinResult.h"
#include "SamiActivityOccurrenceResource.h"
#include "SamiActivityOccurrenceResults.h"
#include "SamiActivityResource.h"
#include "SamiActivityUserResource.h"
#include "SamiAddressResource.h"
#include "SamiAffiliate.h"
#include "SamiAggregateCountResource.h"
#include "SamiAggregateInvoiceReportResource.h"
#include "SamiAmazonS3Activity.h"
#include "SamiAnswerResource.h"
#include "SamiApplyPaymentRequest.h"
#include "SamiArticleResource.h"
#include "SamiArtist.h"
#include "SamiArtistResource.h"
#include "SamiAvailableSettingResource.h"
#include "SamiBareActivityResource.h"
#include "SamiBareChallengeActivityResource.h"
#include "SamiBatch.h"
#include "SamiBatchRequest.h"
#include "SamiBatchReturn.h"
#include "SamiBehavior.h"
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
#include "SamiBundleItem.h"
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
#include "SamiCityResource.h"
#include "SamiClientResource.h"
#include "SamiCollection«Country».h"
#include "SamiCollection«VideoContribution».h"
#include "SamiCollection«string».h"
#include "SamiCommentResource.h"
#include "SamiCommentSearch.h"
#include "SamiConfig.h"
#include "SamiContributionResource.h"
#include "SamiCountry.h"
#include "SamiCountryResource.h"
#include "SamiCountryTaxResource.h"
#include "SamiCouponDefinition.h"
#include "SamiCouponItem.h"
#include "SamiCreateBillingAgreementRequest.h"
#include "SamiCreatePayPalPaymentRequest.h"
#include "SamiCurrency.h"
#include "SamiCurrencyResource.h"
#include "SamiCustomerConfig.h"
#include "SamiCustomerResource.h"
#include "SamiDatabaseConfig.h"
#include "SamiDeltaResource.h"
#include "SamiDeviceResource.h"
#include "SamiDiscount.h"
#include "SamiDispositionCount.h"
#include "SamiDispositionResource.h"
#include "SamiEntitlementItem.h"
#include "SamiExpression«object».h"
#include "SamiFinalizeBillingAgreementRequest.h"
#include "SamiFinalizePayPalPaymentRequest.h"
#include "SamiFlagReportResource.h"
#include "SamiFlagResource.h"
#include "SamiForwardLog.h"
#include "SamiFulfillmentType.h"
#include "SamiGooglePaymentRequest.h"
#include "SamiGrantTypeResource.h"
#include "SamiGroup.h"
#include "SamiGroupMember.h"
#include "SamiGroupMemberResource.h"
#include "SamiGroupResource.h"
#include "SamiImportJobOutputResource.h"
#include "SamiImportJobResource.h"
#include "SamiInventorySubscriptionResource.h"
#include "SamiInvoiceCreateRequest.h"
#include "SamiInvoiceItemResource.h"
#include "SamiInvoiceLogEntry.h"
#include "SamiInvoicePaymentStatusRequest.h"
#include "SamiInvoiceResource.h"
#include "SamiItemBehaviorDefinitionResource.h"
#include "SamiItemTemplateResource.h"
#include "SamiKeyValuePair«string,string».h"
#include "SamiLanguage.h"
#include "SamiLeaderboardEntryResource.h"
#include "SamiLeaderboardResource.h"
#include "SamiLevelingResource.h"
#include "SamiLocalizer.h"
#include "SamiLocationLogResource.h"
#include "SamiLookupTypeResource.h"
#include "SamiMaintenance.h"
#include "SamiMap«string,object».h"
#include "SamiMetricResource.h"
#include "SamiMongoDatabaseConfig.h"
#include "SamiNestedCategory.h"
#include "SamiNewPasswordRequest.h"
#include "SamiOauthAccessTokenResource.h"
#include "SamiOperator.h"
#include "SamiOptimalPaymentRequest.h"
#include "SamiPage«AchievementDefinitionResource».h"
#include "SamiPage«AggregateCountResource».h"
#include "SamiPage«AggregateInvoiceReportResource».h"
#include "SamiPage«ArticleResource».h"
#include "SamiPage«ArtistResource».h"
#include "SamiPage«BareActivityResource».h"
#include "SamiPage«BareChallengeActivityResource».h"
#include "SamiPage«BillingReport».h"
#include "SamiPage«BreCategoryResource».h"
#include "SamiPage«BreEventLog».h"
#include "SamiPage«BreGlobalResource».h"
#include "SamiPage«BreRule».h"
#include "SamiPage«BreTriggerResource».h"
#include "SamiPage«CampaignResource».h"
#include "SamiPage«CartSummary».h"
#include "SamiPage«CatalogSale».h"
#include "SamiPage«CategoryResource».h"
#include "SamiPage«ChallengeEventParticipantResource».h"
#include "SamiPage«ChallengeEventResource».h"
#include "SamiPage«ChallengeResource».h"
#include "SamiPage«ClientResource».h"
#include "SamiPage«CommentResource».h"
#include "SamiPage«Config».h"
#include "SamiPage«CountryTaxResource».h"
#include "SamiPage«CurrencyResource».h"
#include "SamiPage«DeviceResource».h"
#include "SamiPage«DispositionResource».h"
#include "SamiPage«EntitlementItem».h"
#include "SamiPage«FlagReportResource».h"
#include "SamiPage«ForwardLog».h"
#include "SamiPage«FulfillmentType».h"
#include "SamiPage«GroupMemberResource».h"
#include "SamiPage«GroupResource».h"
#include "SamiPage«ImportJobResource».h"
#include "SamiPage«InvoiceLogEntry».h"
#include "SamiPage«InvoiceResource».h"
#include "SamiPage«ItemTemplateResource».h"
#include "SamiPage«LevelingResource».h"
#include "SamiPage«LocationLogResource».h"
#include "SamiPage«Map«string,object»».h"
#include "SamiPage«OauthAccessTokenResource».h"
#include "SamiPage«PermissionResource».h"
#include "SamiPage«PollResource».h"
#include "SamiPage«QuestionResource».h"
#include "SamiPage«QuestionTemplateResource».h"
#include "SamiPage«RevenueCountryReportResource».h"
#include "SamiPage«RevenueProductReportResource».h"
#include "SamiPage«RewardSetResource».h"
#include "SamiPage«RoleResource».h"
#include "SamiPage«SavedAddressResource».h"
#include "SamiPage«SimpleUserResource».h"
#include "SamiPage«SimpleWallet».h"
#include "SamiPage«StateTaxResource».h"
#include "SamiPage«StoreItemTemplateResource».h"
#include "SamiPage«StoreItem».h"
#include "SamiPage«SubscriptionResource».h"
#include "SamiPage«SubscriptionTemplateResource».h"
#include "SamiPage«TemplateResource».h"
#include "SamiPage«TransactionResource».h"
#include "SamiPage«UsageInfo».h"
#include "SamiPage«UserAchievementGroupResource».h"
#include "SamiPage«UserActionLog».h"
#include "SamiPage«UserBaseResource».h"
#include "SamiPage«UserInventoryResource».h"
#include "SamiPage«UserItemLogResource».h"
#include "SamiPage«UserLevelingResource».h"
#include "SamiPage«UserRelationshipResource».h"
#include "SamiPage«VendorResource».h"
#include "SamiPage«VideoRelationshipResource».h"
#include "SamiPage«VideoResource».h"
#include "SamiPage«WalletTotalResponse».h"
#include "SamiPage«WalletTransactionResource».h"
#include "SamiPage«string».h"
#include "SamiPayBySavedMethodRequest.h"
#include "SamiPaymentAuthorizationResource.h"
#include "SamiPaymentMethodResource.h"
#include "SamiPaymentMethodTypeResource.h"
#include "SamiPermission.h"
#include "SamiPermissionResource.h"
#include "SamiPollAnswerResource.h"
#include "SamiPollResource.h"
#include "SamiPollResponseResource.h"
#include "SamiPredicateOperation.h"
#include "SamiProperty.h"
#include "SamiPropertyDefinitionResource.h"
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
#include "SamiRole.h"
#include "SamiRoleResource.h"
#include "SamiSampleCountriesResponse.h"
#include "SamiSavedAddressResource.h"
#include "SamiSchedule.h"
#include "SamiSearchReferenceMapping.h"
#include "SamiSelectedSettingResource.h"
#include "SamiSettingOption.h"
#include "SamiShippingItem.h"
#include "SamiSimpleReferenceResource«int».h"
#include "SamiSimpleReferenceResource«long».h"
#include "SamiSimpleReferenceResource«string».h"
#include "SamiSimpleUserResource.h"
#include "SamiSimpleWallet.h"
#include "SamiSku.h"
#include "SamiSkuRequest.h"
#include "SamiSort.h"
#include "SamiSqlDatabaseConfig.h"
#include "SamiStateResource.h"
#include "SamiStateTaxResource.h"
#include "SamiStoreItem.h"
#include "SamiStoreItemTemplateResource.h"
#include "SamiStoreListRequest.h"
#include "SamiStripeCreatePaymentMethod.h"
#include "SamiStripePaymentRequest.h"
#include "SamiSubscriptionCreditResource.h"
#include "SamiSubscriptionPlanResource.h"
#include "SamiSubscriptionResource.h"
#include "SamiSubscriptionTemplateResource.h"
#include "SamiTemplateEmailResource.h"
#include "SamiTemplateResource.h"
#include "SamiTemplateSMSResource.h"
#include "SamiTierResource.h"
#include "SamiTimezone.h"
#include "SamiTokenDetailsResource.h"
#include "SamiTransactionResource.h"
#include "SamiUsageInfo.h"
#include "SamiUser.h"
#include "SamiUserAchievementGroupResource.h"
#include "SamiUserAchievementResource.h"
#include "SamiUserActionLog.h"
#include "SamiUserActivityResultsResource.h"
#include "SamiUserBaseResource.h"
#include "SamiUserInventoryAddRequest.h"
#include "SamiUserInventoryResource.h"
#include "SamiUserItemLogResource.h"
#include "SamiUserLevelingResource.h"
#include "SamiUserRelationship.h"
#include "SamiUserRelationshipReferenceResource.h"
#include "SamiUserRelationshipResource.h"
#include "SamiUserResource.h"
#include "SamiUserTag.h"
#include "SamiVariableTypeResource.h"
#include "SamiVendorResource.h"
#include "SamiVideo.h"
#include "SamiVideoContribution.h"
#include "SamiVideoRelationshipResource.h"
#include "SamiVideoResource.h"
#include "SamiVideoTag.h"
#include "SamiWalletAlterRequest.h"
#include "SamiWalletTotalResponse.h"
#include "SamiWalletTransactionResource.h"
#include "SamiXsollaPaymentRequest.h"

namespace Swagger {
  void*
  create(String type) {
    if(type.Equals(L"SamiAchievementDefinitionResource", true)) {
      return new SamiAchievementDefinitionResource();
    }
    if(type.Equals(L"SamiAchievementProgressUpdateRequest", true)) {
      return new SamiAchievementProgressUpdateRequest();
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
    if(type.Equals(L"SamiActivityResource", true)) {
      return new SamiActivityResource();
    }
    if(type.Equals(L"SamiActivityUserResource", true)) {
      return new SamiActivityUserResource();
    }
    if(type.Equals(L"SamiAddressResource", true)) {
      return new SamiAddressResource();
    }
    if(type.Equals(L"SamiAffiliate", true)) {
      return new SamiAffiliate();
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
    if(type.Equals(L"SamiArtist", true)) {
      return new SamiArtist();
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
    if(type.Equals(L"SamiBatchReturn", true)) {
      return new SamiBatchReturn();
    }
    if(type.Equals(L"SamiBehavior", true)) {
      return new SamiBehavior();
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
    if(type.Equals(L"SamiBundleItem", true)) {
      return new SamiBundleItem();
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
    if(type.Equals(L"SamiCityResource", true)) {
      return new SamiCityResource();
    }
    if(type.Equals(L"SamiClientResource", true)) {
      return new SamiClientResource();
    }
    if(type.Equals(L"SamiCollection«Country»", true)) {
      return new SamiCollection«Country»();
    }
    if(type.Equals(L"SamiCollection«VideoContribution»", true)) {
      return new SamiCollection«VideoContribution»();
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
    if(type.Equals(L"SamiCouponItem", true)) {
      return new SamiCouponItem();
    }
    if(type.Equals(L"SamiCreateBillingAgreementRequest", true)) {
      return new SamiCreateBillingAgreementRequest();
    }
    if(type.Equals(L"SamiCreatePayPalPaymentRequest", true)) {
      return new SamiCreatePayPalPaymentRequest();
    }
    if(type.Equals(L"SamiCurrency", true)) {
      return new SamiCurrency();
    }
    if(type.Equals(L"SamiCurrencyResource", true)) {
      return new SamiCurrencyResource();
    }
    if(type.Equals(L"SamiCustomerConfig", true)) {
      return new SamiCustomerConfig();
    }
    if(type.Equals(L"SamiCustomerResource", true)) {
      return new SamiCustomerResource();
    }
    if(type.Equals(L"SamiDatabaseConfig", true)) {
      return new SamiDatabaseConfig();
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
    if(type.Equals(L"SamiEntitlementItem", true)) {
      return new SamiEntitlementItem();
    }
    if(type.Equals(L"SamiExpression«object»", true)) {
      return new SamiExpression«object»();
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
    if(type.Equals(L"SamiGooglePaymentRequest", true)) {
      return new SamiGooglePaymentRequest();
    }
    if(type.Equals(L"SamiGrantTypeResource", true)) {
      return new SamiGrantTypeResource();
    }
    if(type.Equals(L"SamiGroup", true)) {
      return new SamiGroup();
    }
    if(type.Equals(L"SamiGroupMember", true)) {
      return new SamiGroupMember();
    }
    if(type.Equals(L"SamiGroupMemberResource", true)) {
      return new SamiGroupMemberResource();
    }
    if(type.Equals(L"SamiGroupResource", true)) {
      return new SamiGroupResource();
    }
    if(type.Equals(L"SamiImportJobOutputResource", true)) {
      return new SamiImportJobOutputResource();
    }
    if(type.Equals(L"SamiImportJobResource", true)) {
      return new SamiImportJobResource();
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
    if(type.Equals(L"SamiItemBehaviorDefinitionResource", true)) {
      return new SamiItemBehaviorDefinitionResource();
    }
    if(type.Equals(L"SamiItemTemplateResource", true)) {
      return new SamiItemTemplateResource();
    }
    if(type.Equals(L"SamiKeyValuePair«string,string»", true)) {
      return new SamiKeyValuePair«string,string»();
    }
    if(type.Equals(L"SamiLanguage", true)) {
      return new SamiLanguage();
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
    if(type.Equals(L"SamiLocalizer", true)) {
      return new SamiLocalizer();
    }
    if(type.Equals(L"SamiLocationLogResource", true)) {
      return new SamiLocationLogResource();
    }
    if(type.Equals(L"SamiLookupTypeResource", true)) {
      return new SamiLookupTypeResource();
    }
    if(type.Equals(L"SamiMaintenance", true)) {
      return new SamiMaintenance();
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
    if(type.Equals(L"SamiOauthAccessTokenResource", true)) {
      return new SamiOauthAccessTokenResource();
    }
    if(type.Equals(L"SamiOperator", true)) {
      return new SamiOperator();
    }
    if(type.Equals(L"SamiOptimalPaymentRequest", true)) {
      return new SamiOptimalPaymentRequest();
    }
    if(type.Equals(L"SamiPage«AchievementDefinitionResource»", true)) {
      return new SamiPage«AchievementDefinitionResource»();
    }
    if(type.Equals(L"SamiPage«AggregateCountResource»", true)) {
      return new SamiPage«AggregateCountResource»();
    }
    if(type.Equals(L"SamiPage«AggregateInvoiceReportResource»", true)) {
      return new SamiPage«AggregateInvoiceReportResource»();
    }
    if(type.Equals(L"SamiPage«ArticleResource»", true)) {
      return new SamiPage«ArticleResource»();
    }
    if(type.Equals(L"SamiPage«ArtistResource»", true)) {
      return new SamiPage«ArtistResource»();
    }
    if(type.Equals(L"SamiPage«BareActivityResource»", true)) {
      return new SamiPage«BareActivityResource»();
    }
    if(type.Equals(L"SamiPage«BareChallengeActivityResource»", true)) {
      return new SamiPage«BareChallengeActivityResource»();
    }
    if(type.Equals(L"SamiPage«BillingReport»", true)) {
      return new SamiPage«BillingReport»();
    }
    if(type.Equals(L"SamiPage«BreCategoryResource»", true)) {
      return new SamiPage«BreCategoryResource»();
    }
    if(type.Equals(L"SamiPage«BreEventLog»", true)) {
      return new SamiPage«BreEventLog»();
    }
    if(type.Equals(L"SamiPage«BreGlobalResource»", true)) {
      return new SamiPage«BreGlobalResource»();
    }
    if(type.Equals(L"SamiPage«BreRule»", true)) {
      return new SamiPage«BreRule»();
    }
    if(type.Equals(L"SamiPage«BreTriggerResource»", true)) {
      return new SamiPage«BreTriggerResource»();
    }
    if(type.Equals(L"SamiPage«CampaignResource»", true)) {
      return new SamiPage«CampaignResource»();
    }
    if(type.Equals(L"SamiPage«CartSummary»", true)) {
      return new SamiPage«CartSummary»();
    }
    if(type.Equals(L"SamiPage«CatalogSale»", true)) {
      return new SamiPage«CatalogSale»();
    }
    if(type.Equals(L"SamiPage«CategoryResource»", true)) {
      return new SamiPage«CategoryResource»();
    }
    if(type.Equals(L"SamiPage«ChallengeEventParticipantResource»", true)) {
      return new SamiPage«ChallengeEventParticipantResource»();
    }
    if(type.Equals(L"SamiPage«ChallengeEventResource»", true)) {
      return new SamiPage«ChallengeEventResource»();
    }
    if(type.Equals(L"SamiPage«ChallengeResource»", true)) {
      return new SamiPage«ChallengeResource»();
    }
    if(type.Equals(L"SamiPage«ClientResource»", true)) {
      return new SamiPage«ClientResource»();
    }
    if(type.Equals(L"SamiPage«CommentResource»", true)) {
      return new SamiPage«CommentResource»();
    }
    if(type.Equals(L"SamiPage«Config»", true)) {
      return new SamiPage«Config»();
    }
    if(type.Equals(L"SamiPage«CountryTaxResource»", true)) {
      return new SamiPage«CountryTaxResource»();
    }
    if(type.Equals(L"SamiPage«CurrencyResource»", true)) {
      return new SamiPage«CurrencyResource»();
    }
    if(type.Equals(L"SamiPage«DeviceResource»", true)) {
      return new SamiPage«DeviceResource»();
    }
    if(type.Equals(L"SamiPage«DispositionResource»", true)) {
      return new SamiPage«DispositionResource»();
    }
    if(type.Equals(L"SamiPage«EntitlementItem»", true)) {
      return new SamiPage«EntitlementItem»();
    }
    if(type.Equals(L"SamiPage«FlagReportResource»", true)) {
      return new SamiPage«FlagReportResource»();
    }
    if(type.Equals(L"SamiPage«ForwardLog»", true)) {
      return new SamiPage«ForwardLog»();
    }
    if(type.Equals(L"SamiPage«FulfillmentType»", true)) {
      return new SamiPage«FulfillmentType»();
    }
    if(type.Equals(L"SamiPage«GroupMemberResource»", true)) {
      return new SamiPage«GroupMemberResource»();
    }
    if(type.Equals(L"SamiPage«GroupResource»", true)) {
      return new SamiPage«GroupResource»();
    }
    if(type.Equals(L"SamiPage«ImportJobResource»", true)) {
      return new SamiPage«ImportJobResource»();
    }
    if(type.Equals(L"SamiPage«InvoiceLogEntry»", true)) {
      return new SamiPage«InvoiceLogEntry»();
    }
    if(type.Equals(L"SamiPage«InvoiceResource»", true)) {
      return new SamiPage«InvoiceResource»();
    }
    if(type.Equals(L"SamiPage«ItemTemplateResource»", true)) {
      return new SamiPage«ItemTemplateResource»();
    }
    if(type.Equals(L"SamiPage«LevelingResource»", true)) {
      return new SamiPage«LevelingResource»();
    }
    if(type.Equals(L"SamiPage«LocationLogResource»", true)) {
      return new SamiPage«LocationLogResource»();
    }
    if(type.Equals(L"SamiPage«Map«string,object»»", true)) {
      return new SamiPage«Map«string,object»»();
    }
    if(type.Equals(L"SamiPage«OauthAccessTokenResource»", true)) {
      return new SamiPage«OauthAccessTokenResource»();
    }
    if(type.Equals(L"SamiPage«PermissionResource»", true)) {
      return new SamiPage«PermissionResource»();
    }
    if(type.Equals(L"SamiPage«PollResource»", true)) {
      return new SamiPage«PollResource»();
    }
    if(type.Equals(L"SamiPage«QuestionResource»", true)) {
      return new SamiPage«QuestionResource»();
    }
    if(type.Equals(L"SamiPage«QuestionTemplateResource»", true)) {
      return new SamiPage«QuestionTemplateResource»();
    }
    if(type.Equals(L"SamiPage«RevenueCountryReportResource»", true)) {
      return new SamiPage«RevenueCountryReportResource»();
    }
    if(type.Equals(L"SamiPage«RevenueProductReportResource»", true)) {
      return new SamiPage«RevenueProductReportResource»();
    }
    if(type.Equals(L"SamiPage«RewardSetResource»", true)) {
      return new SamiPage«RewardSetResource»();
    }
    if(type.Equals(L"SamiPage«RoleResource»", true)) {
      return new SamiPage«RoleResource»();
    }
    if(type.Equals(L"SamiPage«SavedAddressResource»", true)) {
      return new SamiPage«SavedAddressResource»();
    }
    if(type.Equals(L"SamiPage«SimpleUserResource»", true)) {
      return new SamiPage«SimpleUserResource»();
    }
    if(type.Equals(L"SamiPage«SimpleWallet»", true)) {
      return new SamiPage«SimpleWallet»();
    }
    if(type.Equals(L"SamiPage«StateTaxResource»", true)) {
      return new SamiPage«StateTaxResource»();
    }
    if(type.Equals(L"SamiPage«StoreItemTemplateResource»", true)) {
      return new SamiPage«StoreItemTemplateResource»();
    }
    if(type.Equals(L"SamiPage«StoreItem»", true)) {
      return new SamiPage«StoreItem»();
    }
    if(type.Equals(L"SamiPage«SubscriptionResource»", true)) {
      return new SamiPage«SubscriptionResource»();
    }
    if(type.Equals(L"SamiPage«SubscriptionTemplateResource»", true)) {
      return new SamiPage«SubscriptionTemplateResource»();
    }
    if(type.Equals(L"SamiPage«TemplateResource»", true)) {
      return new SamiPage«TemplateResource»();
    }
    if(type.Equals(L"SamiPage«TransactionResource»", true)) {
      return new SamiPage«TransactionResource»();
    }
    if(type.Equals(L"SamiPage«UsageInfo»", true)) {
      return new SamiPage«UsageInfo»();
    }
    if(type.Equals(L"SamiPage«UserAchievementGroupResource»", true)) {
      return new SamiPage«UserAchievementGroupResource»();
    }
    if(type.Equals(L"SamiPage«UserActionLog»", true)) {
      return new SamiPage«UserActionLog»();
    }
    if(type.Equals(L"SamiPage«UserBaseResource»", true)) {
      return new SamiPage«UserBaseResource»();
    }
    if(type.Equals(L"SamiPage«UserInventoryResource»", true)) {
      return new SamiPage«UserInventoryResource»();
    }
    if(type.Equals(L"SamiPage«UserItemLogResource»", true)) {
      return new SamiPage«UserItemLogResource»();
    }
    if(type.Equals(L"SamiPage«UserLevelingResource»", true)) {
      return new SamiPage«UserLevelingResource»();
    }
    if(type.Equals(L"SamiPage«UserRelationshipResource»", true)) {
      return new SamiPage«UserRelationshipResource»();
    }
    if(type.Equals(L"SamiPage«VendorResource»", true)) {
      return new SamiPage«VendorResource»();
    }
    if(type.Equals(L"SamiPage«VideoRelationshipResource»", true)) {
      return new SamiPage«VideoRelationshipResource»();
    }
    if(type.Equals(L"SamiPage«VideoResource»", true)) {
      return new SamiPage«VideoResource»();
    }
    if(type.Equals(L"SamiPage«WalletTotalResponse»", true)) {
      return new SamiPage«WalletTotalResponse»();
    }
    if(type.Equals(L"SamiPage«WalletTransactionResource»", true)) {
      return new SamiPage«WalletTransactionResource»();
    }
    if(type.Equals(L"SamiPage«string»", true)) {
      return new SamiPage«string»();
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
    if(type.Equals(L"SamiPermission", true)) {
      return new SamiPermission();
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
    if(type.Equals(L"SamiProperty", true)) {
      return new SamiProperty();
    }
    if(type.Equals(L"SamiPropertyDefinitionResource", true)) {
      return new SamiPropertyDefinitionResource();
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
    if(type.Equals(L"SamiRole", true)) {
      return new SamiRole();
    }
    if(type.Equals(L"SamiRoleResource", true)) {
      return new SamiRoleResource();
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
    if(type.Equals(L"SamiShippingItem", true)) {
      return new SamiShippingItem();
    }
    if(type.Equals(L"SamiSimpleReferenceResource«int»", true)) {
      return new SamiSimpleReferenceResource«int»();
    }
    if(type.Equals(L"SamiSimpleReferenceResource«long»", true)) {
      return new SamiSimpleReferenceResource«long»();
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
    if(type.Equals(L"SamiSort", true)) {
      return new SamiSort();
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
    if(type.Equals(L"SamiStoreItem", true)) {
      return new SamiStoreItem();
    }
    if(type.Equals(L"SamiStoreItemTemplateResource", true)) {
      return new SamiStoreItemTemplateResource();
    }
    if(type.Equals(L"SamiStoreListRequest", true)) {
      return new SamiStoreListRequest();
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
    if(type.Equals(L"SamiSubscriptionPlanResource", true)) {
      return new SamiSubscriptionPlanResource();
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
    if(type.Equals(L"SamiTimezone", true)) {
      return new SamiTimezone();
    }
    if(type.Equals(L"SamiTokenDetailsResource", true)) {
      return new SamiTokenDetailsResource();
    }
    if(type.Equals(L"SamiTransactionResource", true)) {
      return new SamiTransactionResource();
    }
    if(type.Equals(L"SamiUsageInfo", true)) {
      return new SamiUsageInfo();
    }
    if(type.Equals(L"SamiUser", true)) {
      return new SamiUser();
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
    if(type.Equals(L"SamiUserRelationship", true)) {
      return new SamiUserRelationship();
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
    if(type.Equals(L"SamiUserTag", true)) {
      return new SamiUserTag();
    }
    if(type.Equals(L"SamiVariableTypeResource", true)) {
      return new SamiVariableTypeResource();
    }
    if(type.Equals(L"SamiVendorResource", true)) {
      return new SamiVendorResource();
    }
    if(type.Equals(L"SamiVideo", true)) {
      return new SamiVideo();
    }
    if(type.Equals(L"SamiVideoContribution", true)) {
      return new SamiVideoContribution();
    }
    if(type.Equals(L"SamiVideoRelationshipResource", true)) {
      return new SamiVideoRelationshipResource();
    }
    if(type.Equals(L"SamiVideoResource", true)) {
      return new SamiVideoResource();
    }
    if(type.Equals(L"SamiVideoTag", true)) {
      return new SamiVideoTag();
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
