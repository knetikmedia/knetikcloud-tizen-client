/*
 * SamiSimpleReferenceResource«object».h
 * 
 * 
 */

#ifndef SamiSimpleReferenceResource«object»_H_
#define SamiSimpleReferenceResource«object»_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiObject.h"
using Tizen::Base::String;


namespace Swagger {

class SamiSimpleReferenceResource«object»: public SamiObject {
public:
    SamiSimpleReferenceResource«object»();
    SamiSimpleReferenceResource«object»(String* json);
    virtual ~SamiSimpleReferenceResource«object»();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSimpleReferenceResource«object»* fromJson(String* obj);

    SamiObject* getPId();
    void setPId(SamiObject* pId);
    String* getPName();
    void setPName(String* pName);

private:
    SamiObject* pId;
String* pName;
};

} /* namespace Swagger */

#endif /* SamiSimpleReferenceResource«object»_H_ */
