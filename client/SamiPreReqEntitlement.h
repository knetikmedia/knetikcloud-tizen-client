/*
 * SamiPreReqEntitlement.h
 * 
 * 
 */

#ifndef SamiPreReqEntitlement_H_
#define SamiPreReqEntitlement_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiBehavior.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiPreReqEntitlement: public SamiObject {
public:
    SamiPreReqEntitlement();
    SamiPreReqEntitlement(String* json);
    virtual ~SamiPreReqEntitlement();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPreReqEntitlement* fromJson(String* obj);

    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPTypeHint();
    void setPTypeHint(String* pType_hint);
    IList* getPItemIds();
    void setPItemIds(IList* pItem_ids);

private:
    String* pDescription;
String* pType_hint;
IList* pItem_ids;
};

} /* namespace Swagger */

#endif /* SamiPreReqEntitlement_H_ */
