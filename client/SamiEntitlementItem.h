/*
 * SamiEntitlementItem.h
 * 
 * 
 */

#ifndef SamiEntitlementItem_H_
#define SamiEntitlementItem_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiBehavior.h"
#include "SamiItem.h"
#include "SamiProperty.h"
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiEntitlementItem: public SamiObject {
public:
    SamiEntitlementItem();
    SamiEntitlementItem(String* json);
    virtual ~SamiEntitlementItem();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiEntitlementItem* fromJson(String* obj);

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
};

} /* namespace Swagger */

#endif /* SamiEntitlementItem_H_ */
