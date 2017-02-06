/*
 * SamiUserInventoryResource.h
 * 
 * 
 */

#ifndef SamiUserInventoryResource_H_
#define SamiUserInventoryResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiObject.h"
#include "SamiSimpleUserResource.h"
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiUserInventoryResource: public SamiObject {
public:
    SamiUserInventoryResource();
    SamiUserInventoryResource(String* json);
    virtual ~SamiUserInventoryResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserInventoryResource* fromJson(String* obj);

    SamiObject* getPBehaviorData();
    void setPBehaviorData(SamiObject* pBehavior_data);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    Long* getPExpires();
    void setPExpires(Long* pExpires);
    Integer* getPId();
    void setPId(Integer* pId);
    Integer* getPInvoiceId();
    void setPInvoiceId(Integer* pInvoice_id);
    Integer* getPItemId();
    void setPItemId(Integer* pItem_id);
    String* getPItemName();
    void setPItemName(String* pItem_name);
    String* getPItemTypeHint();
    void setPItemTypeHint(String* pItem_type_hint);
    String* getPStatus();
    void setPStatus(String* pStatus);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);
    SamiSimpleUserResource* getPUser();
    void setPUser(SamiSimpleUserResource* pUser);

private:
    SamiObject* pBehavior_data;
Long* pCreated_date;
Long* pExpires;
Integer* pId;
Integer* pInvoice_id;
Integer* pItem_id;
String* pItem_name;
String* pItem_type_hint;
String* pStatus;
Long* pUpdated_date;
SamiSimpleUserResource* pUser;
};

} /* namespace Swagger */

#endif /* SamiUserInventoryResource_H_ */
