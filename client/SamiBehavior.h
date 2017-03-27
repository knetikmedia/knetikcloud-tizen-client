/*
 * SamiBehavior.h
 * 
 * 
 */

#ifndef SamiBehavior_H_
#define SamiBehavior_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiBehavior: public SamiObject {
public:
    SamiBehavior();
    SamiBehavior(String* json);
    virtual ~SamiBehavior();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBehavior* fromJson(String* obj);

    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPTypeHint();
    void setPTypeHint(String* pType_hint);

private:
    String* pDescription;
String* pType_hint;
};

} /* namespace Swagger */

#endif /* SamiBehavior_H_ */
