/*
 * SamiNestedCategory.h
 * 
 * 
 */

#ifndef SamiNestedCategory_H_
#define SamiNestedCategory_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::String;


namespace Swagger {

class SamiNestedCategory: public SamiObject {
public:
    SamiNestedCategory();
    SamiNestedCategory(String* json);
    virtual ~SamiNestedCategory();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNestedCategory* fromJson(String* obj);

    Boolean* getPActive();
    void setPActive(Boolean* pActive);
    String* getPId();
    void setPId(String* pId);
    String* getPName();
    void setPName(String* pName);

private:
    Boolean* pActive;
String* pId;
String* pName;
};

} /* namespace Swagger */

#endif /* SamiNestedCategory_H_ */
