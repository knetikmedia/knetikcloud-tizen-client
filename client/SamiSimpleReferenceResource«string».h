/*
 * SamiSimpleReferenceResource«string».h
 * 
 * 
 */

#ifndef SamiSimpleReferenceResource«string»_H_
#define SamiSimpleReferenceResource«string»_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiSimpleReferenceResource«string»: public SamiObject {
public:
    SamiSimpleReferenceResource«string»();
    SamiSimpleReferenceResource«string»(String* json);
    virtual ~SamiSimpleReferenceResource«string»();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSimpleReferenceResource«string»* fromJson(String* obj);

    String* getPId();
    void setPId(String* pId);
    String* getPName();
    void setPName(String* pName);

private:
    String* pId;
String* pName;
};

} /* namespace Swagger */

#endif /* SamiSimpleReferenceResource«string»_H_ */
