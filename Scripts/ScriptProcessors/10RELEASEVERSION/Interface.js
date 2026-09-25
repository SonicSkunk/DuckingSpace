Content.makeFrontInterface(700, 400);


// -- Compressor Visual

const var dp = Synth.getDisplayBufferSource("Script FX1");

const var bf = dp.getDisplayBuffer(0);

const var Panel1 = Content.getComponent("Panel1");

Panel1.setTimerCallback(function()
{
	
	this.data.path = bf.createPath(
	  this.getLocalBounds(0), // target area
	  [0.0, 1.0, 0, -1], // source range [ymin, ymax, sampleStart, sampleEnd]
	  0); // start value
	this.repaint();
});

Panel1.startTimer(30);

Panel1.setPaintRoutine(function(g)
{
	g.setColour(Colours.gold);
	g.fillPath(this.data.path, this.getLocalBounds(0));
	
});



inline function onButton1Control(component, value)
{
	Engine.openWebsite("www.sonicskunk.com");
};

Content.getComponent("Button1").setControlCallback(onButton1Control);


Engine.loadFontAs("{PROJECT_FOLDER}Fonts/Duck.ttf", "Duck");

// Background
const var PanelBG = Content.getComponent("PanelBG");
PanelBG.setPaintRoutine(function(g){g.fillAll(this.get("bgColour"));});

// LAF
const rotary_laf = Engine.createGlobalScriptLookAndFeel();
rotary_laf.registerFunction("drawRotarySlider", function(g, obj)
{

// Knob
	if (obj.text == "Dry/Wet" || obj.text == "Ducking" || obj.text == "Speed" || obj.text == "Damping"  || obj.text == "Size" || obj.text == "Decay" || obj.text == "ModFreq" || obj.text == "Mod" || obj.text == "Color" )
    {
    var K = Content.createPath();
    var p1 = Content.createPath();
    var range = obj.max - obj.min;
    
    var startOffset = 2.4;
    var arcThickness = 0.04;
    var arcWidth = 1.0 - 2.0 * arcThickness;
      
    p1.clear();

	var endOffset = -startOffset + 2.0 * startOffset * obj.valueNormalized;
    
    var val = "";

    var a = obj.area;
    var w = obj.area;
    var round = 2;
    var h = a[3];	    
	    
    g.setColour(obj.bgColour);
    p1.addArc([arcThickness / 2, arcThickness / 2, arcWidth + arcThickness, arcWidth + arcThickness], - startOffset , 2.5);

        
    var pathArea = p1.getBounds(obj.area[2]);

        
    g.setColour(obj.bgColour);
    g.drawPath(p1, pathArea, obj.area[2] * arcThickness);

    
    K.addArc([arcThickness / 2, arcThickness / 2, arcWidth + arcThickness, arcWidth + arcThickness], -startOffset - 0.08 , endOffset + 0.08);   

    
    var pathArea = K.getBounds(obj.area[2]);
    

    g.setGradientFill([(0xFF2EFFE9), 100, 0.7* obj.area[3],
    (0xFF762EFF), 2.0*obj.area[2] / 360 - 1, 0.6*obj.area[3]]);
    g.drawPath(K, pathArea, obj.area[2] * arcThickness);


   
    
    if (obj.hover || obj.clicked)
    {

    g.setColour(obj.textColour);	
    g.drawPath(K, pathArea, obj.area[2] * arcThickness );

    }
    
    
    g.rotate(endOffset, [obj.area[2] / 2, obj.area[2] / 2]);
    g.setColour(obj.textColour);
    g.fillRoundedRectangle([obj.area[2] / 2 - obj.area[2] * -0.01, obj.area[2] / 2 - obj.area[2] * 0.295, obj.area[2]  * 0.03, obj.area[2] * 0.03], 3);
    

    


} 

});





// ToolTip
namespace TooltipPanel
{
	const Tooltip = Content.getComponent("Tooltip");
	
	Tooltip.setPaintRoutine(function(g)
	{
		var t = Content.getCurrentTooltip();
		
		g.setColour(this.get("textColour"));
		g.drawAlignedText(t, [0, 0, this.getWidth(), this.getHeight()], "left");
	});
	
	Tooltip.setTimerCallback(function()
	{
		this.repaint();
	});
	
	Tooltip.startTimer(250);
}

// Lottie Animation
const var lottieAnim = "3895.nT6K8C1UE0Vd.nGxfqgI.DoAwf3XkRtgPXU0EDYbxemsi9K7eKkTRYpSB5OLL5I++++u2Iv9AjZ.xE.hkU44gu5sS0J7ti54CsIyAmNmrPTZWryqughwnhS8ZaiyMRGBsqmnCmR1yre7b8UUWcEoaaZZKo7vRyjVExY1gvfprYKjZR8sJlx4+RpDbPgj4Na4yG8zku+bSdaxnb5oqFx+FS7SIFsxcrOU8llgNo1PAZ0UFY0OngFHmt2Q+ASehXyTibqpSxSK4U+bsEIV2sLaBo5wRguNKRECEm8+MNiPmH80U4e8h7edlREQPqyYgt5i1LoDg20YtWYggh48xCLRrxCdvgLwQDUvgwCWvAIHA8RFJnCKQl0zKLTTX04hH1P7PDNbHwCPLgJLwEz.F2XAnanHCVvDHgExfYnPDKgcoxFJHW07BGtXnviU+wPggYEyxEjFl33kkXhCYlwBM3GbXnngyrJO3XBGX3ANhCCEYvZ.EbvBGXfBQHwgghixnBU3BXfwvAGavDGFJLDS.CQ7vF3PENLTzvCLbvgDS7fDR3PDhfYHAQvgGT.iJXBEfwDO3.FPjANDgAXDAHbPALF.J7vD7vDH.FAvggCNr.HFIbXnnpL3vPwY3LxXoervggBwvAGWXBGFJ7Hm7aQjKadCGbDAEbXnHCGO.gEf3vvAGPXhHPgCCEGGGFJNpRcLN.BvPhGpvDPfGlvDSXgE3vvAGUvAFLbvgCS7fEbXn3PJV5vvAGXvAFhwp3IoH0pjrCYWOSpshdAQTyQFI+ToDol7MzbXQ+nJxMkqu4JgriCgt0cStASxnkiUaJYn39bwpbhEiG8irJ2VHiUc1j+p40T+daShDIUL+KGwjpqnNUmElqiIR33qrhlJ3H0ThXIQRa8Ok5noJTpedl7T6hgBEFJnqtl1TVzb1pHBuoFgxXYUzmJcsSkrypc2btgul8bUdWa5KSZMGah8FxFJpppmZtJkPM86TUGae5KhrOWui4KRzqcCEVF60rT0zwZQlTbxVEUaLi09LU730Isq2DYXeueoeA8xrZnaZVOi14wxyKRiNxnKwW8H0anG5joodgjWhxzaD0JMoFWtzjDgc7QcLWxzzawQGcjxZryMqT9R28Gyd2PQdSMxv9K8yzfODtvgMZHCGVPDVfBj.BGh.BJGjfnfDmMxEhXBiEFPXBR3BNDQBTgJLADvEYCElPhHRR4XE5rBDp.EHQEbfBhfDtvEXgHR.iEFOfQDVXBH7PDXb.EfAP.PXCILgCNPFd3BhXBHf0ckf2Ie5RSrgb+Uktjd0IQyDYymRVgUhcFBQy8vapoREXutrqFdwN1pGql2EsWb23rUVMmqj0e+pZi8rghgrpoIxFiR8YmcqxOU0HIqaUMW1HRI5VZys9it+N4RZtcU7wwNwRAs6kLQ9qp4YD07JptWaPpWjVyP0UI0qzkJeUFaBMmM2hprhkDNYo6tdmdMxG1+g5OK0Hr0MymM2IVUmYRPhvZVjZ3klVIZtrmbOd7VsYUFp+nTr8IuUzBMUqwcxpk8qQzgyUEmZbyg9qqnTzXnndIeYEilO4PqlLVqi9nMqFobL0Sp8aVJcSwWYkAGrlswpsI8HBqghyzr75740uVOqhVqope+hSr2eOKOTGqpycHpiItXddR2wrOF+srDkFQSYW5KrXVs7iRuSMu4kkopJtlaJOadk3ciJan.QBqdjbsqMn8W5k0aXcSoWZ50Y7zirAMo3Xn3xro3EUYmDaL5yjur4fUNEE2yW8lnbcNZ0td1RYpz3Q+Ck9V5rmK57TsYWk7wJWmVtnJdbUz+dHjloY..jgFnPDNzfqZtXC4qtSVseMKO4eMb5uesaauXlxnhnUVGQ5LKjhvCKUUFOxgTkeAemwrRlsoGl4sdo0ZLaY+QTJQtpfYsxU76G75Qo6U3X6lz0i+whnYihoyZhXccTY8kj0Fa0Gdakl6upkSGxe9UYj5rH8Ra0PypUsruZnf8twsvZIZSKLKhj76JdjqqZVY8x6kHLkrxEDsJSVYxVX9rCN02nipPjYTgUrPH8NzzqLgkHqvdwEWLdnJ9Ruyn5rls4JO0GrhgRNSeqbndS1ypZmtW53jjqkNqgSmr0qegF6M4iQiX+iuxuisbUNrF80glZp7RjLkaSIIR09BpnpxQLqxDIqkSo2hjvZm80xPweMaDUGRR05klRHY6oTZW9o9HgHpDCeG70SEypdiQkRjp7RtdOsuwiylnullyhhmDuUnclz42EeGN84qTClyqeUatWaJ9pdRdZdOKUWQ2mq24e+kPzEQVIw5U9EoJw9i34pdn4x6pDZApSGxTp1VZC.BCDPG.iNL.PfCFKRlfXTyFyAyHCjHKG.wTLDgXHFhPC.QP.D..Jg3BqqUg2hQIFDBmth4NzwgAaWCWY9YqxGB+3wJY9hcbnu5NR6pi3oQt6gatb8fKTbVONIO6wl83LibiHMmoc8WZeRT838RTXVD6PhT1v3SkK2nTSWT0zBfr8hJg+TwXXtpjvgRN9pIu8+YNNbI7uqo6Fb59D4v8kSCYpr6Z1TcvJvHIb.KvRYAWtHHey4ilMYIae0iMg+54brWiB40pN9GUx6VpiUN+jWQBnJtcAhQBKeGQ67ofCKGFUkNFF1a.DirJUtWPS37sG6gKynoFHU6boieFY7huGFkDJRSzBu2vg0f5rC3U3qmdsZ2IAaYvZBYWZgQLYnoxBCbCZmOwGJSvKqaEM37da.7ckHR4.JXL5XrFJRYS90c+ak7yUwsLHe0QhDJT1Vb7CbHQ494ZtlZmaX519994PrTmj..kPKI86OhWX8Awt3Lq316BdS1AylSTw.dTF3uM+FDE5SRaqpW+wZV9isahpS2XU7LQVUTlbFuZodZfjU7OLbA6o119zB3hzV6DCMlWqpKqtxdFaljpyR3sibNYFVfLn523wj7nGHFGsPVek6rOK0klXxsL2Kd5KHi1k9rnHQyAYUjOibhjm.JQGiVZpcJpK2IV9ErWrWA1h8y7yqi4P3DVSLYcLi8FSv4dlKIDxrqLV7XpyuHio9BkSR1PnAH+bYxkWJOdqbnSMP+CjeZjuQAKA0NBdri9v2ctHA1OOt4Rq5wzZPVD0v07QbtD8Loe28uvbNfYVK5RswmS.4zo+fty+9FE8w4HObqNeRU3KT1IdttY5cIPYlUWIfif7KzywHyJ+FrdQlrPMhywOlTHDX2v6sdwAnZVKyhHglHZ7uicfOhmOJVUE+oDCeRbrjMREHwF2lSgxCO9Q5ozP1U5fyhXOBTQ5icVHEVfFdERmVKz+SVh.iIDbsxNa+KChElNiq48n.Ms42jJZGq7K4v+FL1vIzaL7gJbihM.viqkabYzAhlGxze0y+hjdaabjcHX+CrC014A81dYPbjg7NPxQmm5yEI4pw8AsbcBuF0rIBofAhcOXkEtpx3RkUs.uYgQSjQAMT7gYnYA3CasZIIzrHmYkSx3Q+iSLkVknHPcq2Vsqqiaegdg.XjsVQZtn8yC+UNZy.94OiQG9Cp6uuMvd1zzRSqc7i39ZAbxSxGWGT0X15OEYxb2jUdpx5flc9w.vvPJBntqy4ib8oZFksAHADZlhPY1KghA3aQykaibd8SvxrczImzPg0jo0CUqTZsvWH02xJHwmirEoCKlSDBNfxSP0AC32IY+Df.cu.cJyvaiTPWr2efp6IQ5LW5SW+xHUTToqhkz5Q8IkmjnUHU9PHlftswdW3imExb3xi20SjRyTnjGEMyCg3Wd2HifemMvSSErSaFP.g0yKglQJQcvZ0qnVJg3oc2dzfz3AZkIT2umUthhgUclXmllfLtt4jkwXW3B6NLtiJquQO60GfmKc7jXsEaUrZbbISit5t1MTjW9CbXDrryTSsvqclCgygPpybhYqjWNFW2.vMxhvD4jE4dOxz2hi7OGbOcq0WgF.kO3ZMhNAPXG5qx63BchzK4xvBkQO4Ya5JAukguM7v9PLRQkTeA9C1nEOGYr1LxpqsSCEkFGXHO9EQha2JefRfQwG4rDfDMwEagSKCbOsMtuUabalRtHrLpEDSIZAdTp8KNJmf97YhcsW18w.E00D7vSGo6G8zC1ih9w4RIxgHr8fvf1SFgoa+xNGChEBoWLw78GuPuIV7dhw6IXJ5AIKCUw5u3eAjtMHOtd3pKUDRiIbP6ThfIDwbcm08rKmPjigWYfjch+PpCOalgqi.rBzrp1oClQQLb9s0fDUpd.Jm+cQn8XmJVicmQL5YHFmPzuhqZ4A.2L+yIxgHpv+wnv+4d69xELsfv2cByi.OdsUsfzN+8rEaDcxNnsLySChYIKGnkEn5P.n8VeBaCfP5mgYT3gYrnJaFRwxDU3PUvircdP.QiJK2ODsx8W7Xd.2tpHljG24KlHW3g5W9V0G6a2CRMk95ybrMTC9+xVwAkrpRXIseTZ1RtqaeAeAkY2tFlGnuEoSThrTrbhAL8A2WcKs3TRsUiErlZoj897cRSPWDA28BGU5Bz+fPmOCFWtYJDT+wIaiLqRoHv8yRb8CM3PNiRhN8TytyE4bMGi.W.tstvQprFb3RFjaEL.IpmRhaBBHgrs6PoVbLD3eCi1v0bFRD.2rQ0jArwCu2mxGSwJnIpZK0LjTWWgDvmiwAlSNjjK6E.5nw.qQEvjn9fZS+r9Xar+ReHUtSElIag8+TE.P.Mtu7Xf7Huijl58ZYNUCZGJiHMa0ot7yPUXrrda6whGlwMsZXB20Om40Uu07uiD4rpUcQ1rUvUIe67cbFkTNIGlt.7gDdU38A7E1+4iFNMZCodBKuCMNOR7lwJp8iUJKrxinOrlNhz2jUkO01f2ENwAd+sQgByMwp.yfnSZrVAhtemG8U5c7xexd2gbEliobOZyryvHikUyW0feQ9rnL7AyZ.RMfvlmI+Kx3dcpN8GI+6kO7j5jK5Ot6ohj0jwckuVuln5p9RPh7BFrUiT4PCb4EuhjhF414qSoperRbVa1JZgYRaLglNSE2fWp8YTEMdWEiEtOdWC691MuYlCroiNydU6Ep30QF4isAcc+Vguf6n8Mtg6OpAqVRO0Cv0jALU5dOz+6NsvVwvInlOMm7XEB.229dvhVc+0sQMdgZmP.WGFyilKlKrqEUvQUPzFYpQqFFDhdKNRsZTYXZqrH2Shel.RP5Q9ApyJ81k7NuBLNgjFV3rtvxx4BlUMmlQOQD1lgkjjqY7pX6C"

const var LottiePanel = Content.getComponent("LottiePanel");
LottiePanel.setAnimation(lottieAnim);
const var object = LottiePanel.getAnimationData();
LottiePanel.setTimerCallback(function()
{
    var nextFrame = (object.currentFrame + 1) % object.numFrames;

    this.setAnimationFrame(nextFrame);
});
LottiePanel.startTimer(1000.0 / object.frameRate);function onNoteOn()
{
	
}
 function onNoteOff()
{
	
}
 function onController()
{
	
}
 function onTimer()
{
	
}
 function onControl(number, value)
{
	
}
 