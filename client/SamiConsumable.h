/*
 * SamiConsumable.h
 * 
 * 
 */

#ifndef SamiConsumable_H_
#define SamiConsumable_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiBehavior.h"
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiConsumable: public SamiObject {
public:
    SamiConsumable();
    SamiConsumable(String* json);
    virtual ~SamiConsumable();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiConsumable* fromJson(String* obj);

    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPTypeHint();
    void setPTypeHint(String* pType_hint);
    Integer* getPMaxUse();
    void setPMaxUse(Integer* pMax_use);

private:
    String* pDescription;
String* pType_hint;
Integer* pMax_use;
};

} /* namespace Swagger */

#endif /* SamiConsumable_H_ */
