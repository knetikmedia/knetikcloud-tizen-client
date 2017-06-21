/*
 * SamiFulfillable.h
 * 
 * 
 */

#ifndef SamiFulfillable_H_
#define SamiFulfillable_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiBehavior.h"
using Tizen::Base::String;


namespace Swagger {

class SamiFulfillable: public SamiObject {
public:
    SamiFulfillable();
    SamiFulfillable(String* json);
    virtual ~SamiFulfillable();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiFulfillable* fromJson(String* obj);

    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPTypeHint();
    void setPTypeHint(String* pType_hint);
    String* getPTypeName();
    void setPTypeName(String* pType_name);

private:
    String* pDescription;
String* pType_hint;
String* pType_name;
};

} /* namespace Swagger */

#endif /* SamiFulfillable_H_ */
