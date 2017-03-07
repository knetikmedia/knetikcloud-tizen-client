/*
 * SamiSubscriptionResource.h
 * 
 * 
 */

#ifndef SamiSubscriptionResource_H_
#define SamiSubscriptionResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiProperty.h"
#include "SamiSubscriptionPlanResource.h"
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiSubscriptionResource: public SamiObject {
public:
    SamiSubscriptionResource();
    SamiSubscriptionResource(String* json);
    virtual ~SamiSubscriptionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSubscriptionResource* fromJson(String* obj);

    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    String* getPAvailability();
    void setPAvailability(String* pAvailability);
    String* getPCategory();
    void setPCategory(String* pCategory);
    Integer* getPConsolidationDayOfMonth();
    void setPConsolidationDayOfMonth(Integer* pConsolidation_day_of_month);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    IList* getPGeoCountryList();
    void setPGeoCountryList(IList* pGeo_country_list);
    String* getPGeoPolicyType();
    void setPGeoPolicyType(String* pGeo_policy_type);
    Integer* getPId();
    void setPId(Integer* pId);
    String* getPLongDescription();
    void setPLongDescription(String* pLong_description);
    String* getPName();
    void setPName(String* pName);
    IList* getPPlans();
    void setPPlans(IList* pPlans);
    String* getPShortDescription();
    void setPShortDescription(String* pShort_description);
    Integer* getPSort();
    void setPSort(Integer* pSort);
    Long* getPStoreEnd();
    void setPStoreEnd(Long* pStore_end);
    Long* getPStoreStart();
    void setPStoreStart(Long* pStore_start);
    IList* getPTags();
    void setPTags(IList* pTags);
    String* getPTemplate();
    void setPTemplate(String* pTemplate);
    String* getPUniqueKey();
    void setPUniqueKey(String* pUnique_key);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);
    Integer* getPVendorId();
    void setPVendorId(Integer* pVendor_id);

private:
    HashMap* pAdditional_properties;
String* pAvailability;
String* pCategory;
Integer* pConsolidation_day_of_month;
Long* pCreated_date;
IList* pGeo_country_list;
String* pGeo_policy_type;
Integer* pId;
String* pLong_description;
String* pName;
IList* pPlans;
String* pShort_description;
Integer* pSort;
Long* pStore_end;
Long* pStore_start;
IList* pTags;
String* pTemplate;
String* pUnique_key;
Long* pUpdated_date;
Integer* pVendor_id;
};

} /* namespace Swagger */

#endif /* SamiSubscriptionResource_H_ */
