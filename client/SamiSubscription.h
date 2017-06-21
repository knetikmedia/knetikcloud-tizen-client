/*
 * SamiSubscription.h
 * 
 * 
 */

#ifndef SamiSubscription_H_
#define SamiSubscription_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiBehavior.h"
#include "SamiProperty.h"
#include "SamiSku.h"
#include "SamiStoreItem.h"
#include "SamiSubscriptionPlan.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiSubscription: public SamiObject {
public:
    SamiSubscription();
    SamiSubscription(String* json);
    virtual ~SamiSubscription();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSubscription* fromJson(String* obj);

    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    IList* getPBehaviors();
    void setPBehaviors(IList* pBehaviors);
    String* getPCategory();
    void setPCategory(String* pCategory);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    Integer* getPId();
    void setPId(Integer* pId);
    String* getPLongDescription();
    void setPLongDescription(String* pLong_description);
    String* getPName();
    void setPName(String* pName);
    String* getPShortDescription();
    void setPShortDescription(String* pShort_description);
    Integer* getPSort();
    void setPSort(Integer* pSort);
    IList* getPTags();
    void setPTags(IList* pTags);
    String* getPTemplate();
    void setPTemplate(String* pTemplate);
    String* getPTypeHint();
    void setPTypeHint(String* pType_hint);
    String* getPUniqueKey();
    void setPUniqueKey(String* pUnique_key);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);
    Boolean* getPDisplayable();
    void setPDisplayable(Boolean* pDisplayable);
    IList* getPGeoCountryList();
    void setPGeoCountryList(IList* pGeo_country_list);
    String* getPGeoPolicyType();
    void setPGeoPolicyType(String* pGeo_policy_type);
    Integer* getPShippingTier();
    void setPShippingTier(Integer* pShipping_tier);
    IList* getPSkus();
    void setPSkus(IList* pSkus);
    Long* getPStoreEnd();
    void setPStoreEnd(Long* pStore_end);
    Long* getPStoreStart();
    void setPStoreStart(Long* pStore_start);
    Integer* getPVendorId();
    void setPVendorId(Integer* pVendor_id);
    String* getPAvailability();
    void setPAvailability(String* pAvailability);
    Integer* getPConsolidationDayOfMonth();
    void setPConsolidationDayOfMonth(Integer* pConsolidation_day_of_month);
    IList* getPSubscriptionPlans();
    void setPSubscriptionPlans(IList* pSubscription_plans);

private:
    HashMap* pAdditional_properties;
IList* pBehaviors;
String* pCategory;
Long* pCreated_date;
Integer* pId;
String* pLong_description;
String* pName;
String* pShort_description;
Integer* pSort;
IList* pTags;
String* pTemplate;
String* pType_hint;
String* pUnique_key;
Long* pUpdated_date;
Boolean* pDisplayable;
IList* pGeo_country_list;
String* pGeo_policy_type;
Integer* pShipping_tier;
IList* pSkus;
Long* pStore_end;
Long* pStore_start;
Integer* pVendor_id;
String* pAvailability;
Integer* pConsolidation_day_of_month;
IList* pSubscription_plans;
};

} /* namespace Swagger */

#endif /* SamiSubscription_H_ */
