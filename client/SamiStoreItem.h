/*
 * SamiStoreItem.h
 * 
 * 
 */

#ifndef SamiStoreItem_H_
#define SamiStoreItem_H_

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
using Tizen::Base::Boolean;
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiStoreItem: public SamiObject {
public:
    SamiStoreItem();
    SamiStoreItem(String* json);
    virtual ~SamiStoreItem();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiStoreItem* fromJson(String* obj);

    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    IList* getPBehaviors();
    void setPBehaviors(IList* pBehaviors);
    String* getPCategory();
    void setPCategory(String* pCategory);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    Boolean* getPDisplayable();
    void setPDisplayable(Boolean* pDisplayable);
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
    Integer* getPShippingTier();
    void setPShippingTier(Integer* pShipping_tier);
    String* getPShortDescription();
    void setPShortDescription(String* pShort_description);
    IList* getPSkus();
    void setPSkus(IList* pSkus);
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
    String* getPTypeHint();
    void setPTypeHint(String* pType_hint);
    String* getPUniqueKey();
    void setPUniqueKey(String* pUnique_key);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);
    Integer* getPVendorId();
    void setPVendorId(Integer* pVendor_id);

private:
    HashMap* pAdditional_properties;
IList* pBehaviors;
String* pCategory;
Long* pCreated_date;
Boolean* pDisplayable;
IList* pGeo_country_list;
String* pGeo_policy_type;
Integer* pId;
String* pLong_description;
String* pName;
Integer* pShipping_tier;
String* pShort_description;
IList* pSkus;
Integer* pSort;
Long* pStore_end;
Long* pStore_start;
IList* pTags;
String* pTemplate;
String* pType_hint;
String* pUnique_key;
Long* pUpdated_date;
Integer* pVendor_id;
};

} /* namespace Swagger */

#endif /* SamiStoreItem_H_ */
