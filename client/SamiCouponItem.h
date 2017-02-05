/*
 * SamiCouponItem.h
 * 
 * 
 */

#ifndef SamiCouponItem_H_
#define SamiCouponItem_H_

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
using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiCouponItem: public SamiObject {
public:
    SamiCouponItem();
    SamiCouponItem(String* json);
    virtual ~SamiCouponItem();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCouponItem* fromJson(String* obj);

    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    IList* getPBehaviors();
    void setPBehaviors(IList* pBehaviors);
    String* getPCategory();
    void setPCategory(String* pCategory);
    String* getPCouponTypeHint();
    void setPCouponTypeHint(String* pCoupon_type_hint);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    Double* getPDiscountMax();
    void setPDiscountMax(Double* pDiscount_max);
    Double* getPDiscountMinCartValue();
    void setPDiscountMinCartValue(Double* pDiscount_min_cart_value);
    String* getPDiscountType();
    void setPDiscountType(String* pDiscount_type);
    Double* getPDiscountValue();
    void setPDiscountValue(Double* pDiscount_value);
    Boolean* getPDisplayable();
    void setPDisplayable(Boolean* pDisplayable);
    Boolean* getPExclusive();
    void setPExclusive(Boolean* pExclusive);
    IList* getPGeoCountryList();
    void setPGeoCountryList(IList* pGeo_country_list);
    String* getPGeoPolicyType();
    void setPGeoPolicyType(String* pGeo_policy_type);
    Integer* getPId();
    void setPId(Integer* pId);
    Integer* getPItemId();
    void setPItemId(Integer* pItem_id);
    String* getPLongDescription();
    void setPLongDescription(String* pLong_description);
    Integer* getPMaxQuantity();
    void setPMaxQuantity(Integer* pMax_quantity);
    String* getPName();
    void setPName(String* pName);
    Boolean* getPSelfExclusive();
    void setPSelfExclusive(Boolean* pSelf_exclusive);
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
    IList* getPValidForTags();
    void setPValidForTags(IList* pValid_for_tags);
    Integer* getPVendorId();
    void setPVendorId(Integer* pVendor_id);

private:
    HashMap* pAdditional_properties;
IList* pBehaviors;
String* pCategory;
String* pCoupon_type_hint;
Long* pCreated_date;
Double* pDiscount_max;
Double* pDiscount_min_cart_value;
String* pDiscount_type;
Double* pDiscount_value;
Boolean* pDisplayable;
Boolean* pExclusive;
IList* pGeo_country_list;
String* pGeo_policy_type;
Integer* pId;
Integer* pItem_id;
String* pLong_description;
Integer* pMax_quantity;
String* pName;
Boolean* pSelf_exclusive;
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
IList* pValid_for_tags;
Integer* pVendor_id;
};

} /* namespace Swagger */

#endif /* SamiCouponItem_H_ */
