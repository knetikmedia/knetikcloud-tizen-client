/*
 * SamiKeyValuePair«string,string».h
 * 
 * 
 */

#ifndef SamiKeyValuePair«string,string»_H_
#define SamiKeyValuePair«string,string»_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiKeyValuePair«string,string»: public SamiObject {
public:
    SamiKeyValuePair«string,string»();
    SamiKeyValuePair«string,string»(String* json);
    virtual ~SamiKeyValuePair«string,string»();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiKeyValuePair«string,string»* fromJson(String* obj);

    String* getPKey();
    void setPKey(String* pKey);
    String* getPValue();
    void setPValue(String* pValue);

private:
    String* pKey;
String* pValue;
};

} /* namespace Swagger */

#endif /* SamiKeyValuePair«string,string»_H_ */
