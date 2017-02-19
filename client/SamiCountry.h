/*
 * SamiCountry.h
 * 
 * 
 */

#ifndef SamiCountry_H_
#define SamiCountry_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiCountry: public SamiObject {
public:
    SamiCountry();
    SamiCountry(String* json);
    virtual ~SamiCountry();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCountry* fromJson(String* obj);

    Integer* getPId();
    void setPId(Integer* pId);
    String* getPIso2();
    void setPIso2(String* pIso2);
    String* getPIso3();
    void setPIso3(String* pIso3);
    String* getPName();
    void setPName(String* pName);

private:
    Integer* pId;
String* pIso2;
String* pIso3;
String* pName;
};

} /* namespace Swagger */

#endif /* SamiCountry_H_ */
