/*
 * SamiLimitedGettable.h
 * 
 * 
 */

#ifndef SamiLimitedGettable_H_
#define SamiLimitedGettable_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiBehavior.h"
#include "SamiLimitedGettableGroup.h"
using Tizen::Base::String;


namespace Swagger {

class SamiLimitedGettable: public SamiObject {
public:
    SamiLimitedGettable();
    SamiLimitedGettable(String* json);
    virtual ~SamiLimitedGettable();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiLimitedGettable* fromJson(String* obj);

    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPTypeHint();
    void setPTypeHint(String* pType_hint);
    SamiLimitedGettableGroup* getPGroup();
    void setPGroup(SamiLimitedGettableGroup* pGroup);

private:
    String* pDescription;
String* pType_hint;
SamiLimitedGettableGroup* pGroup;
};

} /* namespace Swagger */

#endif /* SamiLimitedGettable_H_ */
