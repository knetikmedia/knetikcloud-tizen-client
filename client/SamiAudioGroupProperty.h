/*
 * SamiAudioGroupProperty.h
 * 
 * 
 */

#ifndef SamiAudioGroupProperty_H_
#define SamiAudioGroupProperty_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiFileGroupProperty.h"
#include "SamiFileProperty.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiAudioGroupProperty: public SamiObject {
public:
    SamiAudioGroupProperty();
    SamiAudioGroupProperty(String* json);
    virtual ~SamiAudioGroupProperty();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiAudioGroupProperty* fromJson(String* obj);

    String* getPType();
    void setPType(String* pType);
    IList* getPFiles();
    void setPFiles(IList* pFiles);

private:
    String* pType;
IList* pFiles;
};

} /* namespace Swagger */

#endif /* SamiAudioGroupProperty_H_ */
